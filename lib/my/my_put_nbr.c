/*
** EPITECH PROJECT, 2019
** putnbr
** File description:
** my_putnbr
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb > 1) {
        my_put_nbr(nb / 10);
    }
    nb = nb % 10;
    my_putchar(nb + 48);
    return (0);
}
