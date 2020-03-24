#include<stdio.h>
#include<stdlib.h>
#include"server.h"

void main(){
    Student * arr = calloc(25,sizeof(Student));
    int i,n;
    printf("Enter number of records:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n\nEnter data for record %d:\n",i+1);
        read_Stu(&arr[i]);
    }
    printf("Students: \n");
    for(i=0;i<n;i++) disp_Stu(&arr[i]);
    sort_Stu(arr,n);
    printf("\n\nSorted Records: \n");
    for(i=0;i<n;i++) disp_Stu(&arr[i]);
    free(arr);
}