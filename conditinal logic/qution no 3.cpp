//3. WAP to check if the given year is a leap year or not.


#include<stdio.h>
int main(){
	
	int year;
	
	//accepting input from the user
	
	printf("enter a year:");
	scanf("%d",&year);
	
	//checking leap year conditions 
	
	if((year %4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		printf("\n is a leap year",year);
		
	}else{
		printf("is not leap year \n ",year);
	}

}
