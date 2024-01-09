/*4. WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement */


#include<stdio.h>

int main(){

    float a,b,result;
     char opreator;
     
     //accepting input from the user
     
    printf("enter first number:");
     scanf("%d",&a);
     
    printf("enter an opeartor(+.-,*,/,%%):");
     scanf("%d",&opreator);
     
    printf("enter second number:");
     scanf("%d",&b);
	
	//performing calculations based on the operater 
	
	switch (opreator){
		case '+':
			result =a+b;
			printf("result %2f\n",result);
			break;
		case '-':
			result =a-b;
			printf("result %2f\n",result);
			break;
		case '*':
			result =a*b;
			printf("result %2f\n",result);
			break;
		case '/':
			if(b != 0){
				result=a/b;
				printf("result %2f\n",result);
				
			}else{
				printf("error division by zero is undefined\n");
				
			}	
			break;
		case '%':
			if(b != 0){
				result=(int)a % (int)b;
				printf("result %2f\n",result);
				
			}else{
				printf("error modulo by zero is undefined\n");
				
			}break;
		default:
			printf("error invalid operator\n");
			
		
	}
		 
	
}
	
	
