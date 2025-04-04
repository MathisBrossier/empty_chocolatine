/*
** EPITECH PROJECT, 2025
** world.h
** File description:
** world
*/

#ifndef WORLD_H
    #define WORLD_H
    #include "garbage.h"
    #include "my.h"
    #include <SFML/Window.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <string.h>
    #include <unistd.h>
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/Config.h>
    #include <SFML/System/Export.h>
    #include <SFML/System/Sleep.h>
    #include <SFML/System/Time.h>
    #include <SFML/System/Types.h>
    #include <math.h>
    #include <time.h>
    #define M_PI 3.14159265358979323846
    #define MAP_X 100
    #define MAP_Y 100

typedef struct coord_points_s {
    sfVector2f p1;
    sfVector2f p2;
    sfVector2f p3;
    sfVector2f p4;
} coord_points_t;

typedef struct id_point_s {
    int i;
    int j;
} id_point_t;

typedef struct button_s {
    int id;
    sfTexture *texture;
    sfSprite *sprite;
    void *fonction;
} button_t;

typedef struct worldsettings_s {
    int **map3d;
    int tera_mode;
    int angle_x;
    int angle_y;
    int brush_size;
    int mouse_is_pressed;
    float scale;
    float rotation_angle;
    button_t **buttons;
    sfTexture *text_grass;
    sfTexture *text_water;
    sfTexture *text_rock;
    sfVector2i last_mouse_pos;
    sfVector2f offset;
    sfRenderWindow *window;
    sfClock *clock;
} worldsettings_t;

typedef struct winclean_s {
    garbage_t *garbage;
    int return_value;
} winclean_t;

int draw_square(sfVector2f **map2d,
    worldsettings_t *worldsettings, id_point_t *point, int **map3d);
sfVector2f **create_2d_map(int **map3d, worldsettings_t *worldsettings,
    winclean_t *winclean);
int generate_perlin_map(int **map, int octaves, float persistence);
int draw_2d_map(worldsettings_t *worldsettings,
    sfVector2f **map2d, int **map3d, winclean_t *winclean);
int analyse_events(sfEvent event, worldsettings_t *settings);
int draw(worldsettings_t *worldsettings, winclean_t *winclean, int **map3d,
    sfVector2f **map2d);
int draw_buttons(button_t **buttons,
    worldsettings_t *worldsettings);
sfVector2f project_iso_point(int x, int y, int z,
    worldsettings_t *worldsettings);
int draw_line(sfVector2f **map2d,
    worldsettings_t *worldsettings, id_point_t *point, int **map3d);
button_t *create_button(char *path,
    sfVector2f pos, sfIntRect rect, int id);
button_t **init_buttons(winclean_t *winclean);
worldsettings_t *init_settings(winclean_t *winclean);
int **init_map3d(winclean_t *winclean);
sfText *init_text(const char *string, sfFont *font,
    unsigned int size, sfVector2f position);
sfRenderWindow *init_window(sfVideoMode mode, char *title);

#endif /* !WORLD_H */
