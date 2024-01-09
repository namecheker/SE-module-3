// 19. calculate compound interest 


#include<stdio.h>
#include<math.h>
int main(){
	
	float a,r,t,CI;
	int p;
	
	printf("\n enter your principal amount:");
	scanf("%d",&p);
	
	printf("\n enter the annuale interest rate:");
	scanf("%f",&r);
	
	printf("\n enter the time the money is invested for in year:");
	scanf("%f",&t);
	
	a=p*pow((1+r/100),t);
	CI=a-p;
	
	printf("\n compound interest is %f",CI);
	printf("\n total amount is %f",a);
	
	
}
