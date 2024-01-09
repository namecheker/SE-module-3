// 23.wap to caculate swap 2 numbers with using of multiplication and division

#include<stdio.h>
int main(){
	
	int a,b;
	
	printf("\n enter a=");
	scanf("%d",&a);
	
	printf("\n enter b=");
	scanf("%d",&b);
	
	//printf brfource swaping 
	
	printf("\n value befoure swaping a=%d.",a);
	printf("\n value befoure swaping b=%d.",b);
	
	//swap vaive using of multiplication 
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	//print value after swaping 
	
	printf("\n value after swaping a=%d.",a);
	printf("\n value after swaping b=%d.",b);
	
}
