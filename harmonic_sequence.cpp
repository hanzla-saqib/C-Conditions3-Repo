#include<stdio.h>

int main(){
	
	float num,n,count = 0;
	
	printf("Enter the starting number and ending\n");
	scanf("%f%f",&num,&n);//1,5
	
	printf("%f",1 / num);
	while(n != 0)
	{
		count += num + 2;//3,5
		printf("%f\n",1/count);
		n--;//4
	}
	
	
}
