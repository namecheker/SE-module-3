//10.WAP to check whether a number is negative, positive or zero.


#include<stdio.h>
int main(){
	
	float number;
	
	//accepting input from the user
	
	printf("enter a number:");
	scanf("%f",&number);
	
	//checking if the number is positive,negetive,or zero
	
	if(number > 0){
		printf("%2f is a positrive number \n",number);
		
	}else if(number < 0){
		printf("%2f is a negetive number \n",number);
		
	}else{
		printf("%2f is zero \n",number);
		
	}
	   
	
	
	
}
