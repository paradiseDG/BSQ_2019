/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** my_revstr
*/

char *my_revstr(char *str)
{
    int u = 0;
    char l;
    int length;

    while (u <= (my_strlen(str) - 1)/2) {
        l = str[u];
        str[u] = str[length];
        str[length] = l;
        length--;
        u++;
    }
    return (str);
}
