#include<stdio.h>
#include<conio.h>
int main(){
	
	char ch;
	float calcius,num = 0;
	
	//printf("Enter a number and '=' operator\n");
	
	while(1) {
		ch = getch();//1,2,=
		
		if(ch >=48 && ch<=57) {
			
			num = (num * 10) + (ch - 48);//1,1*10 + 2 = 12
		}
	else  if(ch == '=' ) {
		
		calcius = 5 * (num -32) / 9;
		printf("%f to %f\n",num,calcius);
		num = 0;
	}
	else  if(ch == 13) {
		break;
	}
	}
}
