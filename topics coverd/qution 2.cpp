// 2.wap to accept 5 numbers from user and display all numbers. 

#include<stdio.h>
int main(){
	int numbers=5;
	
	//accepting 5 numbers from the user 
	printf("enter 5 numbers \n ");
	for(int i= 0; i<5; ++i){
		printf("number %d:", i+1);
		scanf("%d",&numbers);
	}
	
	//displaying the enterd numbers
	
	printf("\n enterd numbers are:");
	for(int i=0; i<5; ++i){
		printf("%d",numbers);
	}
}