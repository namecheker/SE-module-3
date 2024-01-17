// 1. Write a program to find out the max number from given array using function


#include<stdio.h>
int main(){
	
	int a[5],i,max;
	
	
	printf("enter the 5 numbers:");
	
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		
	}
	
	// find maximum number 
      
      max=a[i];
      
      for(i=1;i<5;i++){
      	if(a[i]>max){
      		
      		max=a[i];
		  }
	  }
	  
	  printf("\n the maximum number is %d",max);
    
	
}