/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** my_str_isnum
*/

int my_str_isnum(char const *str)
{
    int i;

    i = 0;
    if (str[i] == '-')
        i++;
    while (str[i]) {
        if (str[i] < '0' || str[i] > '9')
            return (-1);
        i++;
    }
    return (0);
}
