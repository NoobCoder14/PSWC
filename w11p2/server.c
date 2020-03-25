#include<stdio.h>
#include"server.h"
#include<string.h>

void init(Student * stu){
    printf("\nEnter student details...\n");
    printf("Enter Name:\n");
    scanf("%s",stu->Name);
    printf("Enter roll no:\n");
    scanf("%d", &(stu->roll_no));
    printf("Enter Math Phy Elec Mech CS marks:\n");
    scanf("%f %f %f %f %f",&(stu->math),&(stu->phy),&(stu->ele),&(stu->mech),&(stu->cs));
    stu->total = stu->math+stu->ele+stu->phy+stu->mech+stu->cs;
    stu->avg = stu->total/5;
    int avg = stu->avg;
    if(avg > 85){
        strcpy(stu->div,"FCD");
        strcpy(stu->res,"PASS");
    } else if(avg >=60 && avg < 85){
        strcpy(stu->div,"FC");
        strcpy(stu->res,"PASS");      
    } else if(avg >=50 && avg < 60){
        strcpy(stu->div,"SC");
        strcpy(stu->res,"PASS");      
    } else if(avg >=40 && avg < 60){
        strcpy(stu->div,"TC");
        strcpy(stu->res,"PASS");      
    } else if(avg<40){
        strcpy(stu->res,"FAIL");      
    }
}

void display(Student arr[], int s){
    for(int i = 0; i<s;i++){
        printf("\nName:%s\nRoll No:%d\nDiv:%s\nRes:%s\n", arr[i].Name, arr[i].roll_no,arr[i].div,arr[i].res);
    }
}