/*
** EPITECH PROJECT, 2025
** create_2dmap.c
** File description:
** create_2dmap
*/

#include "../../include/world.h"

sfVector2f project_iso_point(int x, int y, int z,
    worldsettings_t *worldsettings)
{
    sfVector2f point = {0, 0};
    float rotated_x = x * cos(worldsettings->rotation_angle) - y
        * sin(worldsettings->rotation_angle);
    float rotated_y = x * sin(worldsettings->rotation_angle) + y
        * cos(worldsettings->rotation_angle);

    point.x = cos(worldsettings->angle_x * M_PI / 180) * rotated_x
        - cos(worldsettings->angle_x * M_PI / 180) * rotated_y;
    point.y = sin(worldsettings->angle_y * M_PI / 180) * rotated_x
        + sin(worldsettings->angle_y * M_PI / 180)
        * rotated_y - (float)(z * 0.40);
    return point;
}

sfVector2f **create_2d_map(int **map3d, worldsettings_t *worldsettings,
    winclean_t *winclean)
{
    sfVector2f **map_2d = gc_malloc(&winclean->garbage,
        sizeof(sfVector2f *) * MAP_X);

    if (!map_2d) {
        winclean->return_value = 84;
        return NULL;
    }
    for (int i = 0; i < MAP_X; i++) {
        map_2d[i] = gc_malloc(&winclean->garbage, sizeof(sfVector2f) * MAP_Y);
        if (!map_2d[i]) {
            winclean->return_value = 84;
            return NULL;
        }
        for (int j = 0; j < MAP_Y; j++){
            map_2d[i][j] = project_iso_point(i, j, map3d[i][j], worldsettings);
        }
    }
    return map_2d;
}

int draw_2d_map(worldsettings_t *worldsettings,
    sfVector2f **map2d, int **map3d, winclean_t *winclean)
{
    id_point_t *point = gc_malloc(&winclean->garbage, sizeof(id_point_t));

    if (!point) {
        winclean->return_value = 84;
        return 84;
    }
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            point->i = i;
            point->j = j;
            draw_square(map2d, worldsettings, point, map3d);
        }
    }
    return 0;
}
