#include<stdio.h>

void main(){
	char str[100];
	scanf("%[^\n]",str);
	char temp;
	int i = 0, beg = 0, end = 1;
	while(str[i]!='\0'){
		if(i==0?i==0:str[i-1]==' '){
			beg = i;
			while(str[i+1]!='\0'&&str[i+1]!= ' '){
				i++;
				//if(str[i+1] == ' ') break;
			}
			end = i;
			temp = str[beg];
			str[beg] = str[end];
			str[end] = temp;
		}
		i++;
	}
	printf("%s\n",str);
}