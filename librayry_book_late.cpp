#include<stdio.h>

int main(){
	
	int days;
	
	printf("Enter the number of days your are late\n");
	scanf("%d",&days);
	
	if(days == 5) {
		printf("You are 5 days late so fine is 50 paise");
	}else
	if(days >= 6 && days<=10) {
		printf("You are %d days late so fine is 1 rupee",days);
	}else
	if(days >10 && days<30) {
		printf("You are %d days late so fine is 5 rupee",days);
	}else
	if(days >30) {
		printf("You are %d days late so your membership is  cancelled. ",days);
	}
}
