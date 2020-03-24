#include <stdio.h>
#include "server.h"
#include <string.h>


void main(){
    printf("Enter Size of Array:\n");
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int matrix[50][50];
    inp(matrix,a,b);
    spiral(matrix,a,b);
}