/*
** EPITECH PROJECT, 2025
** draw_line.c
** File description:
** draw_line
*/

#include "../../include/world.h"

// sfColor interpolate_color(int height)
// {
//     sfColor color;
//     float t;

//     if (height < 0) {
//         return (sfColor){0, 0, 255, 255};
//     } else if (height == 0) {
//         return (sfColor){0, 255, 0, 255};
//     }
//     t = (float)height / 10.0f;
//     color.r = 255 - 127 * t;
//     color.g = 128 * t;
//     color.b = 0;
//     color.a = 255;
//     return color;
// }

// sfColor color1 = interpolate_color(height1);
// sfColor color2 = interpolate_color(height2);

sfVertexArray *create_square(coord_points_t *co_points)
{
    sfVertexArray *vertex_array = sfVertexArray_create();
    sfVertex v1 = {.position = co_points->p1, .color = sfWhite,
        .texCoords = {0, 0}};
    sfVertex v2 = {.position = co_points->p2, .color = sfWhite,
        .texCoords = {800, 0}};
    sfVertex v3 = {.position = co_points->p4, .color = sfWhite,
        .texCoords = {0, 800}};
    sfVertex v4 = {.position = co_points->p3, .color = sfWhite,
        .texCoords = {800, 800}};

    sfVertexArray_append(vertex_array, v1);
    sfVertexArray_append(vertex_array, v2);
    sfVertexArray_append(vertex_array, v3);
    sfVertexArray_append(vertex_array, v4);
    sfVertexArray_setPrimitiveType(vertex_array, sfQuads);
    return vertex_array;
}

void draw_vertex_array(worldsettings_t *worldsettings, sfVertexArray *array,
    int **map3d, id_point_t *point)
{
    sfRenderStates states = {
        .blendMode = sfBlendAlpha,
        .transform = sfTransform_Identity,
        .texture = worldsettings->text_water,
        .shader = NULL
    };

    if (map3d[point->i][point->j] > -3 || map3d[point->i + 1][point->j] > -3
        || map3d[point->i][point->j + 1] > -3
        || map3d[point->i + 1][point->j + 1] > -3)
        states.texture = worldsettings->text_grass;
    if (map3d[point->i][point->j] > 2 || map3d[point->i + 1][point->j] > 2
        || map3d[point->i][point->j + 1] > 2
        || map3d[point->i + 1][point->j + 1] > 2)
        states.texture = worldsettings->text_rock;
    sfRenderWindow_drawVertexArray(worldsettings->window, array, &states);
}

int scale_draw_square(sfVector2f **map2d,
    worldsettings_t *worldsettings, id_point_t *point, int **map3d)
{
    float const scale = worldsettings->scale;
    coord_points_t *scaled_points = malloc(sizeof(coord_points_t));
    sfVector2f offset = worldsettings->offset;
    sfVertexArray *array;
    int i = point->i;
    int j = point->j;

    scaled_points->p1.x = map2d[i][j].x * scale + offset.x;
    scaled_points->p1.y = map2d[i][j].y * scale + offset.y;
    scaled_points->p2.x = map2d[i][j + 1].x * scale + offset.x;
    scaled_points->p2.y = map2d[i][j + 1].y * scale + offset.y;
    scaled_points->p3.x = map2d[i + 1][j].x * scale + offset.x;
    scaled_points->p3.y = map2d[i + 1][j].y * scale + offset.y;
    scaled_points->p4.x = map2d[i + 1][j + 1].x * scale + offset.x;
    scaled_points->p4.y = map2d[i + 1][j + 1].y * scale + offset.y;
    array = create_square(scaled_points);
    draw_vertex_array(worldsettings, array, map3d, point);
    free(scaled_points);
    sfVertexArray_destroy(array);
    return 0;
}

int draw_square(sfVector2f **map2d,
    worldsettings_t *worldsettings, id_point_t *point, int **map3d)
{
    int i = point->i;
    int j = point->j;

    if (i + 1 < MAP_X && j + 1 < MAP_Y) {
        scale_draw_square(map2d, worldsettings, point, map3d);
    }
    return 0;
}
