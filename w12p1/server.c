#include<stdio.h>
#include"server.h"

void shift(int arr[], int s){
    int temp,temp_;
    temp_ = arr[0];
    for(int i = 0; i < s-1; i++){
        temp = arr[i+1];
        arr[i] = temp;
    }
    arr[s-1] = temp_;
}