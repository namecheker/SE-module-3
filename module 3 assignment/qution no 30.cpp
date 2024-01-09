/* 30.WAP to convert years into days and days into years */


#include<stdio.h>
int main(){
	
	float year;
	double day=365.25;
	
	printf("\n enter number of  year");
    scanf("%f",&year);
    
    day=year*day;
    
    printf("\n year to convert day that day is %2f",day);
    
    day=year/day;
    
    printf("\n day to convert dat that year %f",year);		
	
	
	
}
