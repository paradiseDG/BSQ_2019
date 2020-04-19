/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int i;
    int nbr;

    i = 0;
    nbr = 0;
    while ((str[i] < '0' || str[i] > '9') && str[i] != '\0') {
        i = i + 1;
    }
    while ((str [i] >= '0' && str[i] <= '9') && str[i] != '\0') {
        nbr = ((nbr * 10) + (str[i] - '0'));
    }
    if (str[0] == '-') {
        nbr *= -1;
        return (nbr);
    }
}
