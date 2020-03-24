#include <stdio.h>
#include "server.h"
#include <string.h>


void main(){
    char * str1 = "Hello World";
    char * str2;
    substring(str1,str2,2,5);
    printf("%s",str2);
}