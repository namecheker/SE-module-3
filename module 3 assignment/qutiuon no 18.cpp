// 18.calulate person's anule salary 


#include<stdio.h>
int main(){
	int salary,y_s;
	
	//user enter thir monthly salary
	
	printf("\n enter your monthly salary:");
	scanf("%d",&salary);
	
	//calcute annule salary to get monthly salary from user
	
	y_s=salary*12;
	
	printf("\n your annual salary is %d",y_s);
	
	
}
