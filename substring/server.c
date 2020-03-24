#include <stdio.h>
#include "server.h"
#include <string.h>

void substring(char * str, char * sub_str, int start, int end){
    int i = 0; 
    while(start<=end){
        *(sub_str+i) = *(str+start);
        i++,start++;
    }
}
