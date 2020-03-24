#include<stdio.h>
#include<stdlib.h>
#include"l_l.h"

void insert_beg(int dat){
    Node * temp = malloc(sizeof(Node));
    temp->data = dat;
    temp->link = NULL;
    if(HEAD==NULL){
        HEAD = temp;
    }
    else {
        temp->link = HEAD;
        HEAD = temp;
    }
}

void delete_beg(){
    if(HEAD == NULL){
        printf("List EMPTY\n");
        return;
    }
    Node * temp = malloc(sizeof(Node));
    temp = HEAD;
    HEAD = temp->link;
    free(temp);
}

void delete_end(){
    if(HEAD == NULL){
        printf("List EMPTY\n");
        return;
    }
    Node * traverse = malloc(sizeof(Node));
    Node * temp = malloc(sizeof(Node));
    traverse = HEAD;
    if(traverse->link == NULL) delete_beg();
    while(traverse->link->link!=NULL) traverse=traverse->link;
    temp = traverse->link;
    traverse->link = NULL;
    free(temp);
}

void insert_after(int dat){
    Node * temp = malloc(sizeof(Node));
    Node * traverse = malloc(sizeof(Node));
    temp -> data = dat;
    if(HEAD==NULL) HEAD = temp;
    else {
        traverse = HEAD;
        while(traverse->link!=NULL) traverse=traverse->link;
        traverse->link = temp;
    }
}

void insert_at(int dat, int pos){
    Node * temp = malloc(sizeof(Node));
    Node * traverse = malloc(sizeof(Node));
    int position = 1;
    traverse = HEAD;
    temp->data = dat;
    temp->link = NULL;
    if(pos == 1){
        insert_beg(dat);
    } else if(traverse == NULL){
        printf("Insertion failed. Please check position value.\n");
    } else {
        while(position <= pos-2){
            if(traverse == NULL){
                printf("Position greater than list size\nInsertion Failed.\n");
                break;
            }
            traverse = traverse->link;
            position++;
        }
        temp -> link = traverse->link;
        traverse -> link = temp;
    }
}

void delete_at(int pos){
    Node * temp = malloc(sizeof(Node));
    Node * traverse = malloc(sizeof(Node));
    int position = 1;
    traverse = HEAD;
    temp->link = NULL;
    if(pos == 1){
        delete_beg();
    } else if(traverse == NULL){
        printf("Deletion failed. Please check position value.\n");
    } else {
        while(position <= pos-2){
            if(traverse == NULL){
                printf("Position greater than list size\nDeletion Failed.\n");
                break;
            }
            traverse = traverse->link;
            position++;
        }
        temp = traverse->link;
        traverse->link = traverse->link->link;
        free(temp);
    }
}

void display_list(){
    Node * temp = malloc(sizeof(Node));
    temp = HEAD;
    printf("Display:\n");
    while(temp!=NULL){
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

void sort_list(){
    int temp;
    Node * temp1 = malloc(sizeof(Node));
    Node * temp2 = malloc(sizeof(Node));
    if(HEAD==NULL){
        printf("No elements.\n");
        return;
    }
    temp1 = HEAD;
    temp2 = temp1->link;
    if(temp1->link == NULL){
        return;
    }
    while(temp1 != NULL){
        temp2 = temp1->link;
        while(temp2!=NULL){
            if(temp1->data >= temp2->data){
                temp = temp1->data;
                temp1->data = temp2->data;
                temp2->data = temp;
            }
            temp2 = temp2->link;
        }
        temp1 = temp1->link;
    }
}

void search_list(int dat){
    Node * temp = malloc(sizeof(Node));
    if(HEAD == NULL){
        printf("Empty list. \n");
        return;
    }
    temp = HEAD;
    while(temp!=NULL){
        if(temp->data == dat){
            printf("%d EXISTS in list.\n",dat);
            return;
        }
        temp=temp->link;
    }
    printf("%d DOES NOT EXIST in list\n",dat);
}