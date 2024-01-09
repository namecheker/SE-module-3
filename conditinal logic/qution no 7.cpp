//7. Accept marks from user and check pass or fail


#include<stdio.h>
int main(){
	
	float marks;
	
	//accepting input from the user 
	
	printf("enter the marks:");
	scanf("%f",&marks);
	
	//checking if the student has passed or failed
	
	if(marks>=35){
		printf("congratulations! you have passed \n ");
		
	}else{
		printf("sorry, you have failed. \n");
		
	}
}
