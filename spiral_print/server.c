#include <stdio.h>
#include "server.h"
#include <string.h>

void inp(int mat[50][50], int a,int b){
    int i,j;
    printf("Input array elements:\n");
    for(i = 0; i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&mat[i][j]);
        }
    }
}

void spiral(int mat[50][50],int a, int b){
    int i=0,j=0,m=0,n=0;
    printf("Output:\n");
    while(a>=m && b>=n){
        for(j=n;j<b;j++){
            printf("%d\n",mat[m][j]);
        }
        for(i=m+1;i<a;i++){
            printf("%d\n",mat[i][b-1]);
        }
        for(j=b-2;j>=n;j--){
            printf("%d\n",mat[a-1][j]);
        }
        for(i=a-2;i>m;i--){
            printf("%d\n",mat[i][n]);
        }
        a--;b--;m++;n++;
    }
}