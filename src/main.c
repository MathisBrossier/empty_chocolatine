/*
** EPITECH PROJECT, 2025
** main.c
** File description:
** main
*/

#include "../include/world.h"

static int initialize_world(char *world_name)
{
    (void)world_name;
    return 0;
}

static int cleanup_world(winclean_t *winclean, worldsettings_t *settings)
{
    gc_collect(&winclean->garbage);
    free(settings);
    return 0;
}

static int print_help(void)
{
    printf("USAGE\n");
    printf("    ./my_world\n\n");
    printf("DESCRIPTION\n");
    printf("    My_world is a 3D map editor\n");
    return 0;
}

int run_world(worldsettings_t *settings, winclean_t *winclean)
{
    sfEvent event;
    sfVector2f **map2d = NULL;
    sfTime time;

    settings->map3d = init_map3d(winclean);
    generate_perlin_map(settings->map3d, 2, 6);
    while (sfRenderWindow_isOpen(settings->window)
        && winclean->return_value == 0 && settings->map3d) {
        time = sfClock_getElapsedTime(settings->clock);
        if (sfTime_asSeconds(time) > 0.01){
            analyse_events(event, settings);
            sfClock_restart(settings->clock);
        }
        sfRenderWindow_clear(settings->window, sfBlack);
        map2d = create_2d_map(settings->map3d, settings, winclean);
        draw(settings, winclean, settings->map3d, map2d);
        sfRenderWindow_display(settings->window);
    }
    sfRenderWindow_destroy(settings->window);
    return 0;
}

int main(int ac, char **av)
{
    winclean_t *winclean = malloc(sizeof(winclean_t));
    worldsettings_t *settings = init_settings(winclean);

    winclean->garbage = NULL;
    winclean->return_value = 0;
    if (!isatty(0))
        return 84;
    if ((ac != 1))
        winclean->return_value = 84;
    if (av[1] && strcmp(av[1], "-h") == 0)
        winclean->return_value = print_help();
    if (initialize_world(av[1]) == -1
        || run_world(settings, winclean) == -1)
        winclean->return_value = 84;
    cleanup_world(winclean, settings);
    return winclean->return_value;
}
