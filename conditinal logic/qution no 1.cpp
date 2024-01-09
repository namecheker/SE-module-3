//1.write a c program to accept two integers and check whwther they are equal or not


#include<stdio.h>
int main(){
	
	int a,b;
	
	//accepting input from the user
	
	printf("enter the first integer:");
	scanf("%d",&a);
	
	printf("enter the first integer:");
	scanf("%d",&b);
	
	// checking equality
	
	if(a==b){
		printf("the two integers are qual.\n ");
		
	}else{
		printf("the two integers are not qual.\n");
	}
	
	
}
