#include<stdio.h>
#include<math.h>
int main(){
	//Calculate the distance between two points in a 2D plane: 
	float x1,y1,x2,y2,dis,dis1;
	
	printf("Enter the value of x1 and y1\n");
	scanf("%f%f",&x1,&y1);
	printf("Enter the value of x2 and y2\n");
	scanf("%f%f",&x2,&y2);
	
	dis = (x2-x1) * (x2-x1) + (y2-y1) * (y2-y1);
	dis1 = sqrt(dis);
	
	printf("The distance between P1 and P2 is = %f",dis1);
}
