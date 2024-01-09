// 32.accept 2 numbers and find out its sum check it size

#include<stdio.h>
int main(){
	
	int x,y,sum;
	
	printf("\n enter the first number:");
	scanf("%d",&x);
	
	printf("\n enter the second number:");
	scanf("%d",&y);
	
	sum=x+y;
	printf("sum: %d\n",sum);
	
	printf("size of the sum: %d",sizeof(sum));
	
	
}
