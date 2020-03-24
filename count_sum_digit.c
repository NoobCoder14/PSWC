#include<stdio.h>

int count(int a){
	if(a==0) return 0;
	else return 1+count(a/10);
}

int sum(int a){
	if(a==0) return 0;
	else return a%10+sum(a/10);
}

void main(){
	int inp;
	scanf("%d",&inp);
	printf("Count:%d\nSum:%d\n",count(inp),sum(inp));
}