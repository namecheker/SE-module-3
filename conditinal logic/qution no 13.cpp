//13.WAP to find minimum number among 3 numbers using ternary operator

#include<stdio.h>
int main(){
	
	int a,b,c,min;
	
	//accepting input from the user 
	
	printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
	
	//using teranry operator to find the maxium number 
	
	min= (a>b) ? ((a>c)?a:c):((b>c)?b:c);
	
	
	//displaying the minimum number
	
	printf("the minimum number is: %d \n",min);
	
}
