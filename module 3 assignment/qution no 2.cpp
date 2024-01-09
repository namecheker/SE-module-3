/*2.make a calulator (to  make addition,subtraction,multipication,divison and modulo)*/


#include<stdio.h>

int main(){
	
	int a,b,c,d,e,f,g;
	printf("\n enter value of a:");
	scanf("%d",&a);
	
	printf("\n enter value of b:");
	scanf("%d",&b);
	 
	c =a+b;
	printf("\n the sum of %d and %d is %d",a,b,c);
	
	d =a-b;
	printf("\n the substraction of %d and %d is %d",a,b,d);
	
	e =a*b;
	printf("\n the multiplication of %d and %d is %d",a,b,e);
	
	f =a/b;
	printf("\n the dividon of %d and %d is %d",a,b,f);
	
	g =a%b;
	printf("\n the modulo of %d and %d is %d",a,b,g);
	
	
}
	
	
