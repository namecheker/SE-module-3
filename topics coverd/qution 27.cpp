/*
Series Program:

27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n
*/

#include<stdio.h>
int main(){
	int i,a;
	float b,c,d,sum;
	printf("\n Enter the number for series 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n : ");
	scanf("%d",&a);
	c=0;
	d=0;
	for(i=1;i<=a;i++){
		b=(float)i / (i+1);	// i is integer, so if we need an answer in float than we need to declare i as float while using formula
		if(i%2==0){
			c=c+b;
		}else{
			d=d+b;
		}
	}
	sum=d-c;
	printf("\n Ans of this series is = %.2f",sum);
}

