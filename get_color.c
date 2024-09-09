/*
** EPITECH PROJECT, 2019
** get_color
** File description:
** dazdz
*/
#include "include/my.h"

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int c = red;
    c = (c << 8) | green;
    c = (c << 8) | blue;
    return c;
}
