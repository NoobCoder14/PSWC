#include<stdio.h>

void main(){
	int n;
	scanf("%d",&n);
	int i,j=1,k,x=1,temp=1;
	for(i = 1; i<=n;i++){
		for(k = 0;k<n-i;k++){
			printf("k");
		}
		for(;j<=temp;j++){
			printf("%d",j);
		}
		temp = x;
		x+=2;
		printf("\n");
	}
}