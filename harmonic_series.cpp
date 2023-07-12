#include<stdio.h>

int main(){
	
	float n,sum = 0.0;
	float i;
	
	printf("Enter the limit\n");
	scanf("%f",&n);
	for(i = 1;i<=n;i++)
	{
		if(i == n)
		{
			printf("1/%f\n",i);
		}
		else{
		
		printf("1/%f + ",i);
	}
		
		sum += 1.0 / i; 
	}
	
	printf("The sum of harmonic series is %f",sum);
}
