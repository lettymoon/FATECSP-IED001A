#include <stdio.h>

int len(char f[]){

    int i = 0;
    while (f[i] != '\0')
        i++;

    return i;
}