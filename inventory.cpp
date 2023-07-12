#include<stdio.h>

int main(){
	
	int stock,price,num,quantity,num1;
	char name[30];
	do
	{
	
	printf("Welcome dear customer\nType one of them to continue your shoping\nLaptop(1)  Mobile(2)  Pen(3)  Shoes(4)\n");
    scanf("%d",&num);
    
    switch(num)
    {
    	case 1:
    		stock = 35;
    		price = 5400;
    		printf("Core i7 7th gen\n ");
    		printf("saaaaaaasA DSSSSSSSS DSAD\ndsadsadsadsdsadsdsdsad\ndasdsadsadsadsa\n");
    		printf("The price is %d\n",price);
    		printf("How much quantity do you want to buy");
    		scanf("%d",&quantity); 
    		
    		price = price * quantity;
    		if(stock>=quantity)
    		{
			stock = stock - quantity;
    		printf("The price of %d pieces is %d\n",quantity,price);
    		printf("If you want ot buy something else print any number else 0");
    		scanf("%d",&num1);
    	}
    	else
    	{
    		printf("Out of stock\n");
		}
    		break;
    		
    			case 2:
    		stock = 30;
    		price = 4300;
    		printf("OPPO F11 Pro\n ");
    		printf("saaaaaaasA DSSSSSSSS DSAD\ndsadsadsadsdsadsdsdsad\ndasdsadsadsadsa\n");
    		printf("The price is %d\n",price);
    		printf("How much quantity do you want to buy");
    		scanf("%d",&quantity); 
    		stock = stock - quantity;
    		price = price * quantity;
    		
    		if(stock>=quantity)
    		{
			
    		printf("The price of %d pieces is %d",quantity,price);
    	}
    	else
    	{
    		printf("Out of stock\n");
		}
    		break;
    		
    			case 3:
    		stock = 100;
    		price = 200;
    		printf("Blue Berry fountain Pen\n ");
    		printf("saaaaaaasA DSSSSSSSS DSAD\ndsadsadsadsdsadsdsdsad\ndasdsadsadsadsa\n");
    		printf("The price is %d\n",price);
    		printf("How much quantity do you want to buy");
    		scanf("%d",&quantity); 
    		stock = stock - quantity;
    		price = price * quantity;
    	
    	if(stock>=quantity)
    		{
			
    		printf("The price of %d pieces is %d",quantity,price);
    	}
    	else
    	{
    		printf("Out of stock\n");
		}
			break;
    		
    		case 4:
    		stock = 87;
    		price = 650;
    		printf("Shrenta printa shoes\n ");
    		printf("saaaaaaasA DSSSSSSSS DSAD\ndsadsadsadsdsadsdsdsad\ndasdsadsadsadsa\n");
    		printf("The price is %d\n",price);
    		printf("How much quantity do you want to buy");
    		scanf("%d",&quantity); 
    		stock = stock - quantity;
    		price = price * quantity;
    	
		if(stock>=quantity)
    		{
			
    		printf("The price of %d pieces is %d",quantity,price);
    	}
    	else
    	{
    		printf("Out of stock\n");
		}	
    		break;
    		default:
    			printf("you entered an invalid number");
	}
}while(num1 != 0);
}   
