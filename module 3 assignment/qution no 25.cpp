// 25. accept 5 expense from user and find averange of expense

#include<stdio.h>
int main(){
	
	float E1,E2,E3,E4,E5,A;
	
	printf("\n enter your 5 expense:");
	printf("\n 1.");
	printf("%f",&E1);
	
	printf("\n 2.");
	printf("%f",&E2);
	
	printf("\n 3.");
	printf("%f",&E3);
	
	printf("\n 4.");
	printf("%f",&E4);
	
	printf("\n 5.");
	printf("%f",&E5);
	
	A=E1+E2+E3+E4+E5/5;
	
	printf("\n AVERAGE OF 5 EXPENSE IS %f.",A);
}
