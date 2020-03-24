#include <stdio.h>
#include "server.h"
#include <string.h>


void main(){
    int m1[50][50][50],m2[50][50][50],m3[50][50][50];
    int a,b,c,i,j,k;
    printf("Input size of Arrays:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    input_mat(m1,m2,a,b,c);
    add_mat(m1,m2,m3, a, b, c);
    printf("Added Vals:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            for(k=0;k<c;k++) printf("%d\n", m1[i][j][k]);
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            for(k=0;k<c;k++) printf("%d\n", m2[i][j][k]);
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            for(k=0;k<c;k++) printf("%d\n", m3[i][j][k]);
        }
    }
}