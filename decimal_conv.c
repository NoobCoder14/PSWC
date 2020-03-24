#include<stdio.h>

void decimal_to_binary(int num){
	int bin = 0;
	int i =1;
	while(num!=0){
		bin = bin+num%2*i;
		i=i*10;
		num=num/2;
	}
	printf("Binary: %d\n",bin);
}

void decimal_to_octal(int num){
	int oct = 0;
	int i = 1;
	while(num!=0){
		oct = oct+num%8*i;
		i=i*10;
		num=num/8;
	}
	printf("Octal: %d",oct);
}

void main(){
	int inp;
	scanf("%d",&inp);
	decimal_to_binary(inp);
	decimal_to_octal(inp);
}