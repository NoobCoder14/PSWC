#include<stdio.h>

int main(){
	int days,years,months,inp;
	scanf("%d",&inp);
	years = inp/365;
	inp = inp%365;
	months = inp/30;
	days = inp%30;
	printf("%d years %d months %d days\n",years,months,days);
	return 0;
}