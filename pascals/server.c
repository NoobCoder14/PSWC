#include <stdio.h>
#include "server.h"
#include <string.h>

void pascals(int pas[50][50], int s){
    int i,j;
    for(i = 0; i < s; i++){
        for(j = 0; j <= i; j++){
            if(j==0 || j==i) pas[i][j] = 1;
            else pas[i][j] = pas[i-1][j] + pas[i-1][j-1];
        }
    }
    int k = s;
    for(i = 0; i < s; i++){
        for(int m = 0; m < k; m++) printf(" ");
        for(j = 0; j <= i; j++){
            printf("%d ", pas[i][j]);
        }
        printf("\n");
        k--;
    }
}