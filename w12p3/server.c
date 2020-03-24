#include<stdio.h>
#include"server.h"
#include<stdlib.h>

void read_Stu(Student *stu){
    printf("Enter Student Roll No:\n");
    scanf("%d", &stu->roll_no);
    printf("Enter Student Name:\n");
    scanf("%s", stu->name);
    printf("Enter Student Marks:\n");
    scanf("%d", &stu->marks);  
}

void disp_Stu(Student * stu){
    printf("\n\n");
    printf("Student Roll No: %d\n", stu->roll_no);
    printf("Student Name: %s\n", stu->name);
    printf("Student Marks: %d\n", stu->marks);
}

void sort_Stu(Student arr[],int s){
    int i = 0, j = 0;
    Student temp;
    for(i = 0;i < s; i++){
        for(j = i; j < s-1;j++){
            if(arr[j].marks <= arr[j+1].marks){
                temp = arr[j];
                arr[j] = arr[j+1]; 
                arr[j+1]= temp;
            }
        }
    }
}