#include<stdio.h>
#include"server.h"

void sum(Imp i1, Imp i2){
    int F = i1.feet + i2.feet;
    int I = i1.inches + i2.inches;
    F = F + I/12;
    I = I%12;
    printf("Sum = %d Feet, %d inches", F, I);
}