//5. Check Number Is Positive or Negative


#include<stdio.h>
int main(){
	
	float number;
	
	//accepting input from the user
	
	printf("enter a number:");
	scanf("%f",&number);
	
	//checking if the number is positive,negetive,or zero
	
	if(number>0){
		printf("%2f is a positive number \n",number);
		
	}else if(number<0){
		printf("%2f is a negetive number \n ",number);
		
	}else {
		printf("%f is zero");
	}
}
