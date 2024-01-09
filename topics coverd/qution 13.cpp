/*
13.calculate the Factorial of a Given Number using while loop
*/

#include<stdio.h>
int main(){
	int a,i,n;
	
	printf("\n Enter number : ");
	scanf("%d",&n);
	
	i=n;a=1;
	while(i>=1){
		a=a*i;
		i--;
	}
	printf("\n faltorial of %d is %d",n,a);
	
}