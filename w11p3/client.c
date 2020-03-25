#include<stdio.h>
#include<stdlib.h>
#include"server.h"

void main(){
    printf("Enter Feet and Inches for I1:\n");
    int f,i;
    scanf("%d %d",&f,&i);
    Imp i1 = {f,i};
    printf("Enter Feet and Inches for I2:\n");
    scanf("%d %d",&f,&i);
    Imp i2 = {f,i};
    sum(i1,i2);
}