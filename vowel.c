#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
	char str[100];
	scanf("%[^\n]",str);
	int len = strlen(str),A=0,E=0,I=0,O=0,U=0;
	for(int i = 0;i<len;i++){
		if(tolower(str[i]) == 'a') A++;
		if(tolower(str[i]) == 'e') E++;
		if(tolower(str[i]) == 'i') I++;
		if(tolower(str[i]) == 'o') O++;
		if(tolower(str[i]) == 'u') U++;
	}
	int vowels = A+E+I+O+U;
	int consonants = len - vowels;
	printf("A:%d\nE:%d\nI:%d\nO:%d\nU:%d\nCons:%d\n",A,E,I,O,U,consonants);
}