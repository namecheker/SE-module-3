/* 16.Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot */


#include<stdio.h>
int main(){
	
	float temp;
	
	//read temperature from the user
	
	printf("enter the temp in centigrade:");
	scanf("%f",&temp);
	
	//displaying message based on temperature state
	
	if(temp < 0){
	
	 printf("freezing weather\n ");
	}else if(temp >= 0 && temp <= 10){
	
	 printf("very cold weather \n");
	}else if(temp >10 && temp <=20){
	
	 printf(" cold weather \n");
	}else if(temp >20 && temp <=30){
	
	 printf("normal weather \n");
	}else if(temp >30 && temp <=40){
	
	 printf("it's hot \n");
	}else {
	
	printf("its very hot \n ");
	
    }
	
}
