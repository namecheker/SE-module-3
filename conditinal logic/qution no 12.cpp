// 12.WAP to find maximum number among 3 numbers using ternary operator


#include<stdio.h>
int main(){
	
	int a,b,c,max;
	
	//accepting input from the user
	
	printf("enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	
	//using teranry operator to find the maxium number 
	
	max= (a>b) ? ((a>c)?a:c):((b>c)?b:c);
	
	
	//displaying the maxiumum number
	
	printf("the maximum number is: %d \n",max);
	
}
