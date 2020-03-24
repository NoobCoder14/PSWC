#include<stdio.h>
#include<stdlib.h>
#include"server.h"

void main(){
    printf("Enter size of array:\n");
    int n,i;
    scanf("%d",&n);
    int *arr = calloc(n,sizeof(int));
    printf("Input array elements:\n");
    for(i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    shift(arr,n);
    printf("Output:\n");
    for(i = 0; i < n; i++) printf("%d\n",arr[i]);
    free(arr);
}