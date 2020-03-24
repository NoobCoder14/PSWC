#include <stdio.h>
#include "server.h"
#include <string.h>


void main(){
    printf("Enter Size of Pascal's Triangle:\n");
    int n;
    scanf("%d",&n);
    int pascal[50][50];
    pascals(pascal,n);
}