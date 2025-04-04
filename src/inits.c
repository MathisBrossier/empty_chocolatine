/*
** EPITECH PROJECT, 2025
** inits.c
** File description:
** inits
*/

#include "../include/world.h"

sfText *init_text(const char *string, sfFont *font,
    unsigned int size, sfVector2f position)
{
    sfText *text = sfText_create();

    if (!text)
        return NULL;
    sfText_setString(text, string);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, size);
    sfText_setPosition(text, position);
    return text;
}

static void create_all_buttons(button_t **buttons, winclean_t *winclean)
{
    buttons[0] = create_button("assets/button1.png",
        (sfVector2f){100, 80}, (sfIntRect){25, 20, 50, 50}, 1);
    buttons[1] = create_button("assets/button2.png",
        (sfVector2f){250, 80}, (sfIntRect){25, 20, 50, 50}, 2);
    buttons[2] = create_button("assets/reset2.png",
        (sfVector2f){400, 80}, (sfIntRect){0, 0, 474, 526}, 3);
    buttons[3] = create_button("assets/button_plus.png",
        (sfVector2f){500, 40}, (sfIntRect){0, 0, 100, 100}, 4);
    buttons[4] = create_button("assets/button_minus.png",
        (sfVector2f){650, 40}, (sfIntRect){0, 0, 100, 100}, 5);
    gc_custom(&winclean->garbage, buttons[0]);
    gc_custom(&winclean->garbage, buttons[1]);
    gc_custom(&winclean->garbage, buttons[2]);
    gc_custom(&winclean->garbage, buttons[3]);
    gc_custom(&winclean->garbage, buttons[4]);
    gc_custom(&winclean->garbage, buttons[0]->texture);
    gc_custom(&winclean->garbage, buttons[1]->texture);
    gc_custom(&winclean->garbage, buttons[2]->texture);
    gc_custom(&winclean->garbage, buttons[3]->texture);
    gc_custom(&winclean->garbage, buttons[4]->texture);
}

button_t **init_buttons(winclean_t *winclean)
{
    button_t **buttons = gc_malloc(&winclean->garbage, sizeof(button_t *) * 6);

    if (!buttons) {
        winclean->return_value = 84;
        return NULL;
    }
    create_all_buttons(buttons, winclean);
    if (!buttons[0] || !buttons[1] || !buttons[2]
        || !buttons[3] || !buttons[4]) {
        winclean->return_value = 84;
        gc_collect(&winclean->garbage);
        exit(84);
    }
    sfSprite_setScale(buttons[0]->sprite, (sfVector2f){2, 2});
    sfSprite_setScale(buttons[1]->sprite, (sfVector2f){2, 2});
    sfSprite_setScale(buttons[2]->sprite, (sfVector2f){0.25, 0.25});
    sfSprite_setScale(buttons[3]->sprite, (sfVector2f){2.3, 2.3});
    sfSprite_setScale(buttons[4]->sprite, (sfVector2f){2.3, 2.3});
    buttons[5] = NULL;
    return buttons;
}

static void init_textures(worldsettings_t *settings)
{
    settings->text_grass = sfTexture_createFromFile("./assets/grass.jpg",
        NULL);
    settings->text_water = sfTexture_createFromFile("./assets/water.jpg",
        NULL);
    settings->text_rock = sfTexture_createFromFile("./assets/rock.jpg",
        NULL);
}

worldsettings_t *init_settings(winclean_t *winclean)
{
    worldsettings_t *settings = gc_malloc(&winclean->garbage,
        sizeof(worldsettings_t));

    settings->window = init_window(
        (sfVideoMode){1920, 1080, 32}, "My_world");
    settings->angle_x = 70;
    settings->angle_y = 10;
    settings->scale = 50;
    settings->brush_size = 10;
    settings->tera_mode = 1;
    settings->mouse_is_pressed = 0;
    settings->rotation_angle = 0;
    settings->offset = (sfVector2f){950.0f, 50.0f};
    init_textures(settings);
    settings->clock = sfClock_create();
    settings->buttons = init_buttons(winclean);
    if (!settings->window || !settings->buttons || !settings->text_grass
        || !settings->text_rock || !settings->text_water)
        return NULL;
    return settings;
}

int **init_map3d(winclean_t *winclean)
{
    int **map3d = gc_malloc(&winclean->garbage, sizeof(int *) * MAP_X);

    if (!map3d) {
        winclean->return_value = 84;
        return NULL;
    }
    for (int i = 0; i < MAP_X; i++) {
        map3d[i] = gc_malloc(&winclean->garbage, sizeof(int) * MAP_Y);
        if (!map3d[i]) {
            winclean->return_value = 84;
            return NULL;
        }
        for (int j = 0; j < MAP_Y; j++)
            map3d[i][j] = 0;
    }
    return map3d;
}

sfRenderWindow *init_window(sfVideoMode mode, char *title)
{
    sfRenderWindow *window;

    window = sfRenderWindow_create(mode, title, sfClose, NULL);
    if (!window)
        return NULL;
    sfRenderWindow_setFramerateLimit(window, 60);
    return window;
}
