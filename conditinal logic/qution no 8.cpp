// 8. WAP to accept the height of a person in centimeters and categorize theperson according to their height


#include<stdio.h>
int main(){
	 float height;
	 
	 //accepting input from the user
	 
	 printf("enter the height in centimeters");
	 scanf("%f",&height);
	 
	 //categrorizing the person based on height
	 
	 if(height < 150.0){
	 	printf("short stature \n");
	 	
	 }else if(height >= 150.0 && height < 170.0){
	 	printf("average height \n");
	 	
	 }else{
	 	printf("tall stature \n");
	 	
	 }
}
