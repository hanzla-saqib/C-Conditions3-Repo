#include<stdio.h>

int main(){
	
	int num1,num2,i,HCF,LCM;
	
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);//6,12
	i = (num1>num2)?num1:num2;//i = 6
	
		for(i = 1;i<=num1;i++)
	{
		if(num1 % i == 0 && num2 % i == 0)
		{
			HCF = i;
		}
	}
	
	LCM = num1 * num2 / HCF;
	
	printf("The LCM is %d",LCM);
}
