#include<stdio.h>

int main(){
	
	int num1;
	
	printf("Enter a number\n");
	scanf("%d",&num1);
	
	if(num1 % 2 == 0) {
		
		printf("%d is even",num1);
	}
	else {
	    
	    printf("%d is odd ",num1);
	}
}
