/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** dafzee
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    while (s1[i] == s2[i] || i <= n ){
        i = i + 1;
    }
    if (s1[i] > s2[i]){
    return ("> 0");
    }
    if (s1[i] == s2[i]){
    return ("0");
    }
    if (s1[i] < s2[i]){
    return ("< 0");
    }
    return (0);
}