//11.WAP to find number is even or odd using ternary operator

#include<stdio.h>
int main(){
	
	int number;
	
	//accepting input from the user
	
	printf("enter a number:");
	scanf("%d",&number);
	
	//using the trenary operator to check if the number is even or odd
	(number %2 == 0) ? printf("%d is an even number \n", number):
	                   printf("%d is an odd number \n",number);
	                   
}
