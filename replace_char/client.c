#include <stdio.h>
#include "server.h"
#include <string.h>


void main(){
    char *str1 = "Hello World";
    char str2[50];
    replace_char('o','0',str1,str2);
    printf("%s",str2);
}
