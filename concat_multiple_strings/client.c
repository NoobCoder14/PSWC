#include <stdio.h>
#include "server.h"
#include <string.h>


void main(){
    char str1[100];
    int n;
    scanf("%d",&n);
    for(int i = 0; i<=n; i++){
        char str2[50];
        gets(str2);
        concat(str1,str2);
    }
    printf("%s\n",str1);
}