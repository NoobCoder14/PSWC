#include<stdio.h>
#include<stdlib.h>
#include"server.h"

void main(){
    Student arr[20];
    printf("Enter size of array:\n");
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++) init(&arr[i]);
    display(arr,n);
}