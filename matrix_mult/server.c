#include <stdio.h>
#include "server.h"
#include <string.h>

void input_mat(int mat1[50][50][50],int mat2[50][50][50],int a,int b,int c){
    int i,j,k;
    printf("Input Arr1 elements:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            for(k=0;k<c;k++) scanf("%d", &mat1[i][j][k]);
        }
    }
    printf("Input Arr2 elements:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            for(k=0;k<c;k++) scanf("%d", &mat2[i][j][k]);
        }
    }
}

void add_mat(int mat1[50][50][50],int mat2[50][50][50], int mat3[50][50][50], int a, int b, int c){
    int i,j,k;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            for(k=0;k<c;k++) mat3[i][j][k] = mat1[i][j][k]+mat2[i][j][k];
        }
    }
}