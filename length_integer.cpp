#include<stdio.h>

int main(){
	
	float num,count = 0; 
	printf("Enter a number\n");
	scanf("%",&num);
	//
	while(num != 0.0)
	{
		num /= 10.0;//123/10=12/10=1/10=0
		count++;
	}
	printf("The length of number is %d",count);
}
