/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** my_putstr
*/

#include <unistd.h>

int my_putstr(char *str, int output)
{
    write(1, my_strlen(str));
}
