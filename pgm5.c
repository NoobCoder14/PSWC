#include<stdio.h>

int main(){
	int pay,hours;
	printf("Enter your weekly pay:\n");
	scanf("%f",&pay);
	printf("Enter your worked hours:\n");
	scanf("%f",&hours);
	float avg_pay = pay/hours;
	int a = avg_pay;
	int c = avg_pay*100;
	int b = c%100;
	printf("Your average hourly pay is %d dollars and %d cents", a,c);
	return 0;
}