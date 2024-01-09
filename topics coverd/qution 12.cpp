/*
12.Program of Armstrong Number in C Using For Loop & While Loop
*/

#include<stdio.h>
int main(){
	int i,n,a,b,c,d,sum,count;
	
	printf("\n 1). want to check your number is armstrong number or not ??\n 2). want to how many armstrong number are thare in bitween number you have \n");
	scanf("%d",&d);
	
	if(d==1){
		printf("\n Enter the number : ");
		scanf("%d",&n);
		b=n;
		for( ;n!=0; ){
			a=n%10;
			sum=sum+a*a*a;
			n=n/10;
		}
		if(sum==b){
		printf("\n %d is an armstrong number",sum);
		}else{
			printf("%d is not an armstrog number",b);
		}
		
	}else if(d==2){
		printf("\n Enter the value bitween 1 to 500 to check how many armstrong number is in the value you enter : ");
		scanf("%d",&c);
		
		for(i=1;i<=c;i++){
			b=i;
			n=i;
			sum=0;
			for( ;n!=0; ){
				a=n%10;
				sum=sum+(a*a*a);
				n=n/10;
			}
			if(sum==b){
			printf("\n %d is an armstrong number",sum);
			count++;
			}
		}
		printf("\n  %d armstrong number is available in value less than %d ",count,b);	
	}else{
		printf(" wrong choice");
	}
}

