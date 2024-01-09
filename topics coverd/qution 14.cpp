/*
14.Accept 5 numbers from user and find those numbers factorials
*/

#include<stdio.h>
int main(){
	int a,i=1,n,b,opt;

	printf("\n Select option from below \n 1). while loop \n 2). for loop\n");
	scanf("%d",&opt);
	
	if(opt==1){
		// using while loop
		while(i<=5){
		printf("\n\n Enter number %d : ",i);
		scanf("%d",&n);
		a=1;b=n;
		while(b>=1){
			a=a*b;
			b--;
		}
		printf(" factorial for %d is %d",n,a);
		i++;
		}	
	}else if(opt==2){
		
		// using for loop
		for(i=1;i<=5;i++){
			printf("\n\n Enter number %d : ",i);
			scanf("%d",&n);
			b=1;
			for(a=n;a>=1;a--){
				b=b*a;
			}
			printf(" factorial is %d",b);
		}
	}else{
		printf("\n wrong choise");
	}
	
		
	
	
	
	
}




