/*2. Write a C program to read the value of an integer m and display the value of
n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0 */




#include<stdio.h>
int main(){
	int m,n;
	
	//accepting input from the user
	
	printf("enter an integer(m)");
	scanf("%d",&m);
	
	//checking conditions and assigning value to n
	
	if(m>0){
		n=1;
	}else if(m==0){
		n=0;	
	}else{
		n=-1;
		
		//displaying the value of n
		
		printf("the value of n is %d \n",n);
		
	}
}
