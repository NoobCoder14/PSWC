#include<stdio.h>
#include"server.h"

void read_Emp(Employee *emp){
    printf("Enter Emp ID:\n");
    scanf("%d", &emp->emp_id);
    printf("Enter Emp Name:\n");
    scanf("%s", emp->name);
    printf("Enter Emp Department:\n");
    scanf("%s", emp->dep);  
}

void disp_Emp(Employee * emp){
    printf("Output\n");
    printf("Emp ID: %d\n", emp->emp_id);
    printf("Emp Name: %s\n", emp->name);
    printf("Emp Department: %s\n", emp->dep);
}