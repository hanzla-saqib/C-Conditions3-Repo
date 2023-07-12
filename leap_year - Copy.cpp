#include<stdio.h>

int main(){
	//leap year
	int year;
	
	printf("Enter year\n");
	scanf("%d",&year);
	
	if(year % 4 == 0) {
		if(year % 100 == 0) {
			if(year % 400 == 0) {
				
				printf("%d year is leap year",year);
			} else {
				printf("%d year is not leap year",year);
			} 
		} else {
			printf("%d year is leap year",year);
		}
	} else {
		printf("%d year is not leap year",year);
	}
}
