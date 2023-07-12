#include<stdio.h>

int main(){
	
	int num1,num2;
	
	printf("ENter two numbers\n");
	scanf("%d%d",&num1,&num2);
	
	if(num1>num2) {
		
		printf("num1 = %d is greater than num2 = %d",num1,num2);
	}
	else {
		
		printf("num2 = %d is greater than num1 = %d",num2,num1);
	}
}
