/*
** EPITECH PROJECT, 2025
** main.c
** File description:
** main
*/

#include "../include/world.h"

static void handle_window_close(sfEvent event,
    worldsettings_t *settings)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(settings->window);
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape)
        sfRenderWindow_close(settings->window);
}

static void handle_mouse_wheel(sfEvent event,
    worldsettings_t *settings)
{
    float new_scale_factor = 0;
    sfVector2i mouse_pos;

    if (event.type == sfEvtMouseWheelScrolled) {
        mouse_pos = sfMouse_getPositionRenderWindow(settings->window);
        new_scale_factor = settings->scale;
        settings->scale += event.mouseWheelScroll.delta * 1.0f;
        new_scale_factor = settings->scale / new_scale_factor;
        settings->offset.x = mouse_pos.x -
            (mouse_pos.x - settings->offset.x) * new_scale_factor;
        settings->offset.y = mouse_pos.y - (mouse_pos.y -
            settings->offset.y) * new_scale_factor;
    }
}

static void handle_mouse_move(sfEvent event,
    worldsettings_t *settings)
{
    sfVector2i mouse_pos;

    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.button == sfMouseRight) {
            settings->last_mouse_pos =
                sfMouse_getPositionRenderWindow(settings->window);
        }
    }
    if (event.type == sfEvtMouseMoved) {
        mouse_pos = sfMouse_getPositionRenderWindow(
            settings->window);
        if (sfMouse_isButtonPressed(sfMouseRight)) {
            settings->offset.x -= settings->last_mouse_pos.x - mouse_pos.x;
            settings->offset.y -= settings->last_mouse_pos.y - mouse_pos.y;
        }
        settings->last_mouse_pos = mouse_pos;
    }
}

void handle_arrow_keys(sfEvent event, worldsettings_t *settings)
{
    if (event.type == sfEvtKeyPressed) {
        if (event.key.code == sfKeyUp)
            settings->angle_y += 1;
        if (event.key.code == sfKeyDown)
            settings->angle_y -= 1;
        if (event.key.code == sfKeyLeft)
            settings->rotation_angle -= 0.1;
        if (event.key.code == sfKeyRight)
            settings->rotation_angle += 0.1;
    }
}

int apply_change_on_map(worldsettings_t *settings, sfVector2i id_point,
    sfVector2i mouse_pos, int tera_mode)
{
    int scale = settings->scale;
    sfVector2f point2d;
    int i = id_point.x;
    int j = id_point.y;

    point2d = project_iso_point(i, j, settings->map3d[i][j], settings);
    if (mouse_pos.x > point2d.x * scale + settings->offset.x
        - settings->brush_size
        && mouse_pos.x < point2d.x * scale + settings->offset.x
        + settings->brush_size
        && mouse_pos.y > point2d.y * scale + settings->offset.y
        - settings->brush_size
        && mouse_pos.y < point2d.y * scale + settings->offset.y
        + settings->brush_size){
        if (tera_mode == 1)
        settings->map3d[i][j] += 1;
        if (tera_mode == 2)
            settings->map3d[i][j] -= 1;
        }
    return 0;
}

int check_mouse_pos(worldsettings_t *settings,
    sfVector2i mouse_pos, int tera_mode)
{
    sfVector2i id_point;

    for (int i = 0; i < MAP_X; i++){
        for (int j = 0; j < MAP_Y; j++) {
            id_point.x = i;
            id_point.y = j;
            apply_change_on_map(settings, id_point, mouse_pos, tera_mode);
        }
    }
    return 0;
}

static int do_button_action(int id, worldsettings_t *settings, int i)
{
    switch (id) {
        case 1:
            settings->tera_mode = settings->buttons[i]->id;
            break;
        case 2:
            settings->tera_mode = settings->buttons[i]->id;
            break;
        case 3:
            generate_perlin_map(settings->map3d, 2, 6);
            break;
        case 4:
            settings->brush_size += 1;
            break;
        case 5:
            if (settings->brush_size > 2)
                settings->brush_size -= 1;
            break;
    }
    return 0;
}

int handle_mouse_selection(worldsettings_t *settings)
{
    sfVector2i mouse_pos;
    sfFloatRect bounds;

    mouse_pos = sfMouse_getPositionRenderWindow(settings->window);
    if (settings->mouse_is_pressed && sfMouse_isButtonPressed(sfMouseLeft)) {
        check_mouse_pos(settings, mouse_pos, settings->tera_mode);
    }
    for (int i = 0; settings->buttons[i]; i++){
        bounds = sfSprite_getGlobalBounds(settings->buttons[i]->sprite);
        if (sfFloatRect_contains(&bounds, mouse_pos.x, mouse_pos.y)
            && sfMouse_isButtonPressed(sfMouseLeft)){
            do_button_action(settings->buttons[i]->id, settings, i);
        }
    }
    return 0;
}

int analyse_events(sfEvent event, worldsettings_t *settings)
{
    while (sfRenderWindow_pollEvent(settings->window, &event)){
        if (sfMouse_isButtonPressed(sfMouseLeft)
            && !settings->mouse_is_pressed)
            settings->mouse_is_pressed = 1;
        switch (event.type) {
            case sfEvtMouseButtonReleased:
                settings->mouse_is_pressed = 0;
                break;
            case sfEvtMouseButtonPressed:
                settings->mouse_is_pressed = 1;
            default:
                break;
        }
        handle_window_close(event, settings);
        handle_mouse_wheel(event, settings);
        handle_mouse_move(event, settings);
        handle_arrow_keys(event, settings);
        handle_mouse_selection(settings);
    }
    return 0;
}
