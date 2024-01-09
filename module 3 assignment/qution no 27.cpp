//27. convert days into months

#include<stdio.h>
int main(){
	
	int day;
	double month;
	
	printf("enter day:");
	scanf("%d",&day);
	
	month=day/30.44;
	
	printf("day to convert month is %2f",month);
	
}
