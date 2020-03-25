#include<stdio.h>
#include"server.h"
#include<stdlib.h>

void insert_beg(int dat){
    Node * temp = malloc(sizeof(Node));
    temp->data = dat;
    if(HEAD==NULL){
        HEAD = temp;
    } else {
        temp->link = HEAD;
        HEAD = temp;
    }
    temp = NULL;
    free(temp);
}

void insert_end(int dat){
    Node * temp = malloc(sizeof(Node));
    Node * traverse = malloc(sizeof(Node));
    temp->data = dat;
    if(HEAD==NULL){
        HEAD = temp;
    } else {
        traverse = HEAD;
        while(traverse->link != NULL){
            traverse = traverse->link;
        }
        traverse->link = temp;
    }
    temp = NULL; traverse = NULL;
    free(temp); free(traverse);
}

void display_list(){
    Node * traverse = malloc(sizeof(Node));
    printf("Displaying List:\n");
    if(HEAD == NULL) return;
    else {
        traverse = HEAD;
        while(traverse!=NULL){
            printf("%d ->", traverse->data);
            traverse = traverse->link;
        }
        printf("\n");
    }
}

void sum(){
    Node * traverse = malloc(sizeof(Node));
    int sum = 0;
    if(HEAD==NULL){
        printf("No Nodes.");
        return;
    } else {
        traverse = HEAD;
        while(traverse!=NULL){
            sum+=traverse->data;
            traverse= traverse->link;
        }
    }
    printf("Sum = %d\n",sum);
}

void sum_alternate(){
    Node * traverse = malloc(sizeof(Node));
    int sum = 0;
    if(HEAD==NULL){
        printf("No Nodes.");
        return;
    } else {
        traverse = HEAD;
        int flag = 1;
        while(traverse!=NULL){
            if(flag == 1){
                sum+=traverse->data;
                flag = 0;
            }
            else flag = 1;
            traverse= traverse->link;
        }
    }
    printf("Sum of alternate= %d\n",sum);
}

void sum_eo(){
    Node * traverse = malloc(sizeof(Node));
    int sum_o = 0, sum_e = 0;
    if(HEAD==NULL){
        printf("No Nodes.");
        return;
    } else {
        traverse = HEAD;
        while(traverse!=NULL){
            if(traverse->data%2 == 0) sum_e+=traverse->data;
            else sum_o+=traverse->data;
            traverse= traverse->link;
        }
    }
    printf("Sum of even = %d\nSum of odd =%d\n",sum_e,sum_o);
}


