#include<stdio.h>
#include<stdlib.h>
#include"server.h"

void main(){
    Employee *emp = malloc(sizeof(Employee));
    read_Emp(emp);
    disp_Emp(emp);
    free(emp);
}