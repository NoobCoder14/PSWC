#include <stdio.h>
#include "server.h"
#include <string.h>

char * replace_char(char ch, char ch_r, char * str1,char str[]){
    int len = strlen(str1);
    for(int i = 0; i<len;i++){
        if(*(str1+i)==ch) str[i] = ch_r;
        else str[i]= *(str1+i);
    }
}

