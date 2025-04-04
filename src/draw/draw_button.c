/*
** EPITECH PROJECT, 2025
** button.c
** File description:
** button
*/

#include "../../include/world.h"

button_t *create_button(char *path,
    sfVector2f pos, sfIntRect rect, int id)
{
    button_t *button = malloc(sizeof(button_t));

    if (!button)
        return NULL;
    button->texture = sfTexture_createFromFile(path, NULL);
    if (!button->texture)
        return NULL;
    button->id = id;
    button->sprite = sfSprite_create();
    sfSprite_setTexture(button->sprite, button->texture, sfTrue);
    sfSprite_setPosition(button->sprite, pos);
    sfSprite_setTextureRect(button->sprite, rect);
    return button;
}

int draw_buttons(button_t **buttons,
    worldsettings_t *worldsettings)
{
    for (int i = 0; buttons[i]; i++) {
        sfRenderWindow_drawSprite(worldsettings->window,
            buttons[i]->sprite, NULL);
    }
    return 0;
}
