/*
Series Program:

24. 1 + 2 + 3 + 4 + 5 + ... + n
*/

#include<stdio.h>
int main(){
	int a,i,b=0;
	printf("\n Enter number you want to sum upto : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		b=b+i;
	}
	printf("\n ans of series is = %d",b);
	
}