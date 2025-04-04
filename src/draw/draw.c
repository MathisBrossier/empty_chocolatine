/*
** EPITECH PROJECT, 2025
** G-ING-200-LIL-2-1-myworld-pierric.buchez
** File description:
** draw
*/

#include "../../include/world.h"

int draw_texts(worldsettings_t *worldsettings)
{
    sfFont *font = sfFont_createFromFile("./assets/arial.ttf");
    sfText **text = malloc(sizeof(sfText *) * 4);

    text[1] = init_text("TERAFORMING MODE", font, 40, (sfVector2f){50, 10});
    text[0] = init_text("BRUSH SIZE", font, 40, (sfVector2f){590, 10});
    text[2] = init_text("RESET MAP", font, 40, (sfVector2f){390, 10});
    if (!font)
        return -1;
    if (!text) {
        sfFont_destroy(font);
        fprintf(stderr, "Failed to create text\n");
        return -1;
    }
    text[3] = NULL;
    for (int i = 0; text[i]; i++)
        sfRenderWindow_drawText(worldsettings->window, text[i], NULL);
    for (int i = 0; text[i]; i++)
        sfText_destroy(text[i]);
    sfFont_destroy(font);
    return 0;
}

int draw(worldsettings_t *worldsettings, winclean_t *winclean, int **map3d,
    sfVector2f **map2d)
{
    draw_2d_map(worldsettings, map2d, map3d, winclean);
    draw_buttons(worldsettings->buttons, worldsettings);
    draw_texts(worldsettings);
    return 0;
}
