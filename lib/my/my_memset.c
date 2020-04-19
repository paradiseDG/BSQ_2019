/*
** EPITECH PROJECT, 2019
** my_memeset
** File description:
** hello, this is my memeset. thanks for coming to my ted talk !
*/

#include <unistd.h>
#include <stdlib.h>

char *my_memset(char *s, char c, int size)
{
    int i;

    i = 0;
    while (i < size) {
        s[i] = c;
        i++;
    }
    return (s);
}
