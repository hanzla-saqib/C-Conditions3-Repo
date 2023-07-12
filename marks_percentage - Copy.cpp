#include<stdio.h>

int main(){
	char name[20];
	int marks,roll_n,physics,chem,comp,total_obt;
     float perc;
     printf("Enter your name\n");
     scanf("%s",&name);
     printf("Enter your roll number\n");
     scanf("%d",&roll_n);
     printf("Enter your marks in physics\n");
     scanf("%d",&physics);
     printf("Enter your marks in chemistry\n");
     scanf("%d",&chem);
     printf("Enter your marks in comp\n");
     scanf("%d",&comp);
     float total = 300.0;
     total_obt = physics + chem + comp;
     perc = total_obt * 100 / total;
     
     printf("perctange = %d     %f/",total_obt,perc);
}
