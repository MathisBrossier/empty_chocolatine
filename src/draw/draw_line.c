/*
** EPITECH PROJECT, 2025
** draw_line.c
** File description:
** draw_line
*/

#include "../../include/world.h"

sfColor interpolate_color(int height)
{
    sfColor color;
    float t;

    if (height < 0) {
        return (sfColor){0, 0, 255, 255};
    } else if (height == 0) {
        return (sfColor){0, 255, 0, 255};
    }
    t = (float)height / 10.0f;
    color.r = 255 - 127 * t;
    color.g = 128 * t;
    color.b = 0;
    color.a = 255;
    return color;
}

sfVertexArray *create_line(sfVector2f *point1,
    sfVector2f *point2, int height1, int height2)
{
    sfVertexArray *vertex_array = sfVertexArray_create();
    sfColor color1 = interpolate_color(height1);
    sfColor color2 = interpolate_color(height2);
    sfVertex vertex1 = {.position = *point1, .color = color1};
    sfVertex vertex2 = {.position = *point2, .color = color2};

    sfVertexArray_append(vertex_array, vertex1);
    sfVertexArray_append(vertex_array, vertex2);
    sfVertexArray_setPrimitiveType(vertex_array, sfLinesStrip);
    return (vertex_array);
}

int scale_draw_line_x(sfVector2f **map2d,
    worldsettings_t *worldsettings, id_point_t *point, int **map3d)
{
    float scale = worldsettings->scale;
    sfVector2f scaled_point1;
    sfVector2f scaled_point2;
    sfVector2f offset = worldsettings->offset;
    sfVertexArray *array;
    int i = point->i;
    int j = point->j;

    scaled_point1.x = map2d[i][j].x * scale + offset.x;
    scaled_point1.y = map2d[i][j].y * scale + offset.y;
    scaled_point2.x = map2d[i + 1][j].x * scale + offset.x;
    scaled_point2.y = map2d[i + 1][j].y * scale + offset.y;
    array = create_line(&scaled_point1, &scaled_point2,
        map3d[i][j], map3d[i + 1][j]);
    sfRenderWindow_drawVertexArray(worldsettings->window, array, NULL);
    sfVertexArray_destroy(array);
    return 0;
}

int scale_draw_line_y(sfVector2f **map2d,
    worldsettings_t *worldsettings, id_point_t *point, int **map3d)
{
    float scale = worldsettings->scale;
    sfVector2f scaled_point1;
    sfVector2f scaled_point2;
    sfVector2f offset = worldsettings->offset;
    sfVertexArray *array;
    int i = point->i;
    int j = point->j;

    scaled_point1.x = map2d[i][j].x * scale + offset.x;
    scaled_point1.y = map2d[i][j].y * scale + offset.y;
    scaled_point2.x = map2d[i][j + 1].x * scale + offset.x;
    scaled_point2.y = map2d[i][j + 1].y * scale + offset.y;
    array = create_line(&scaled_point1, &scaled_point2,
        map3d[i][j], map3d[i][j + 1]);
    sfRenderWindow_drawVertexArray(worldsettings->window, array, NULL);
    sfVertexArray_destroy(array);
    return 0;
}

int draw_line(sfVector2f **map2d,
    worldsettings_t *worldsettings, id_point_t *point, int **map3d)
{
    int i = point->i;
    int j = point->j;

    if (i + 1 < MAP_X) {
        scale_draw_line_x(map2d, worldsettings, point, map3d);
    }
    if (j + 1 < MAP_Y) {
        scale_draw_line_y(map2d, worldsettings, point, map3d);
    }
    return 0;
}
