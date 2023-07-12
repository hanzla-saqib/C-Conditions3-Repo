#include<stdio.h>

int main(){
	
	int age,premium,policy_amount,amount;
	char gender[50],health[50],city[20];

    printf("Enter you age\n");
    scanf("%d",&age);
    printf("Enter you gender\n");
    scanf("%s",&gender);
    printf("Enter you health\n");
    scanf("%s",&health);
    printf("Enter you city\n");
    scanf("%s",&city);
      
      if(gender == "male" && health == "excellent"  && city == "city") {
      	
      	if(age>=25 && age<=35)
      	printf("The premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs. ");
	  }else
	  if(gender == "female" && health == "excellent" && (age>=25 && age<=35) && city == "city") {
      	
      	printf("The premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh. ");
	  } else
	  if(gender == "male" && health == "poor" && (age>=25 && age<=35) && city == "village") {
	  	    
	  	    printf("The premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000.");
	  }else
	     if(gender == "female" && health == "poor" && (age>=25 && age<=35) && city == "village") {
	     	printf("the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000. ");
		 }
	     else{
	     	printf("You are not able to be insured");
		 }
      
    }
