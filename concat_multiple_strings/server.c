#include <stdio.h>
#include "server.h"
#include <string.h>

void concat(char str1[], char str2[]){
    int i = strlen(str1);
    int len = strlen(str2);
    int j = 0;
    while(j<len){
        str1[i] = str2[j];
        i++,j++;
    }
}
