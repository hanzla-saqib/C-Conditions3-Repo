#include<stdio.h>

int main(){
	
	int n1,n2,n3,max,min;
	
	printf("Enter three numbers\n");
	scanf("%d%d%d",&n1,&n2,&n3);
                         	
	if(n1>n2 && n1>n3) {
		max = n1;
		
	}else
		if(n2>n1 && n2>n3) {
		max = n2;
		
	}else
    
    	if(n3>n2 && n3>n1) {
		max = n3;
		
	}
	
	         	
	if(n1<n2 && n1<n3) {
		min = n1;
		
	} else
		if(n2<n1 && n2<n3) {
		min = n2;
		
	}else
    
    	if(n3<n2 && n3<n1) {
		min = n3;
		
	}
	
	printf("The maximum number is %d\n",max);
	printf("The minimum number is %d",min);


}
