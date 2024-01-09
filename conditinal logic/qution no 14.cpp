//14.WAP to find the largest of three numbers.

#include<stdio.h>
int main(){
	
	int a,b,c,largest;
	
	//accepting input from the user 
	
	printf("enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	
	//finding the lsrgest number
	
	if(a >=2 && a>=c){
		largest=a;
	}else if(b >= a && b >=c){
		largest=b;
	}else {
		largest=c;
	}
	
	//displaying the largest number
	
	printf("the largest number is: %d \n",largest);
	
}
