/*
** EPITECH PROJECT, 2019
** my_params_to_array
** File description:
** zdadaz
*/
#include <stdlib.h>
#include "include/my.h"

char* my_strdup(char* str)
{
    int len;
    char* dup;

    len = my_strlen(str) + 1;
    dup = malloc(len);
    if(dup == NULL){
        return (0);
    }
    dup = my_strcpy(dup, str);
    dup[len - 1] = '\0';
    return (dup);
}

struct info_param *my_params_to_array(int ac, char **av)
{
    int i = 0;
    struct info_param **yolo;
    yolo = malloc(sizeof(struct info_param*) + 1);
    if (yolo == 0){
        return (0);
    }
    while (i < ac){
        yolo[i] = malloc(sizeof(struct info_param));
        yolo[i]-> length = my_strlen(av[i]);
        yolo[i]-> str = av[i];
        yolo[i]-> copy = my_strdup(av[i]);
        yolo[i]-> word_array = my_str_to_word_array(av[i]);
        i++;
    }
    yolo[i] = 0;
    return (*yolo);
}
