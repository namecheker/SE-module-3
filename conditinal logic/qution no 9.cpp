//9. C Program to Check Uppercase or Lowercase or Digit or Special Character


#include<stdio.h>
int main(){
	
	char charcter;
	
	//accepting input from the user
	
	printf("enter a charcter");
	scanf("%c",charcter);
	
	//checking the type of charcter
	
	if((charcter >='A' && charcter <='Z')){
		
		printf("%c is an uppercase letter \n",charcter);
	}else if(charcter >='a' && charcter <='z'){
		
		printf("%c is a lowercase letter \n",charcter);
	}else if(charcter >='0' && charcter <='9'){
		
		printf("%c is a digit \n",charcter);
	}else{
		printf ("%c is a special charcter \n ",charcter);
		
	}
}
