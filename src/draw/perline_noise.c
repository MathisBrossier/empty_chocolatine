/*
** EPITECH PROJECT, 2025
** G-ING-200-LIL-2-1-myworld-pierric.buchez
** File description:
** perline_noise
*/

#include "../../include/world.h"

float noise(int x, int y)
{
    int n = x + y * 57;

    n = (n << 13) ^ n;
    return (1.0 - ((n * (n * n * 15731 + 789221) + 1376312589)
        & 0x7fffffff) / 1073741824.0);
}

float interpolate(float a, float b, float t)
{
    return a + t * (b - a);
}

float perlin(float x, float y, int octaves, float persistence)
{
    float total = 0;
    float frequency = 1;
    float amplitude = 1;
    float maxValue = 0;

    for (int i = 0; i < octaves; i++) {
        total += interpolate(interpolate(noise(x, y),
            noise(x + 1, y), x - (int)x),
            interpolate(noise(x, y + 1), noise(x + 1, y + 1), x - (int)x),
            y - (int)y) * amplitude;
        maxValue += amplitude;
        amplitude *= persistence;
        frequency *= 2;
        x *= frequency;
        y *= frequency;
    }
    return total / maxValue;
}

int generate_perlin_map(int **map, int octaves, float persistence)
{
    float value = 0;
    float x_offset = 0;
    float y_offset = 0;

    if (!map)
        return 84;
    srand(time(NULL));
    x_offset = (float)(rand() % 10000) / 10.0;
    y_offset = (float)(rand() % 10000) / 10.0;
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            value = perlin((i + x_offset) / 20.0, (j + y_offset)
            / 20.0, octaves, persistence);
            map[i][j] = (int)(value * 7);
        }
    }
    return 0;
}
