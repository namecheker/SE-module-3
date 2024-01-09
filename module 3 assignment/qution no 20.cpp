// 20.accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary 

#include<stdio.h>
int main(){
	
	int salary;
	float A,I_P,L_I;
	
	//to grt selery from user 
	
	printf("\n enter your salary:");
	scanf("%d",&salary);
	
	//less 10% insurance premium in user salary 
	
	I_P=salary*10/100;
	
	printf("\n your insurance premium is %f",I_P);
	
	//printf selery less insurance premium
	
	A=salary-I_P;
	
	printf("\n less insurance premium in your salary than your salary is %f",A);
	
	//less 100% loan installment after less insurance premium 
	
	L_I=A*10/100;
	printf("\n your loan installment is %f",L_I);
	
	//printf selery less insurance premium and loan installment 
	
	printf("\n less I_P & L_P in your salary. then your salary is %f",salary-I_P-L_I);
	
}
