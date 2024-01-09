/*
10.Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)
*/

#include<stdio.h>
int main(){
	int i,n,a,b;
	
	printf("\n Enter the value : ");
	scanf("%d",&n);
	
	a=n%10;
	for(i=n;i!=0;i=n){
		b=n%10;
		n=n/10;
	}
	printf("\n Sum of first and last digit is %d",a+b);

}
