//28. convert years into days and months 

#include<stdio.h>
int main(){
	
	int month=12;
	float year;
	double day=365-25;
	
	printf("\n enter number of year:");
	scanf("%f",&year);
	
	day=year*day;
	month=year*month;
	
	printf("\n year to convert month that day is %2f",day);
	
	printf("\n year to convert month tgat month is %d",month);
	
}
