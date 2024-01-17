/*
9). WAP to show difference between Structure and Union
*/

#include<stdio.h>
#include<string.h>
	struct student{
		int rollno;
		char name[20];
		float per;
	};
	union employee{
		int empno;
		char name[20];
		float salary;
	};

int main(){

	// structure can hold multiple type of data at a  time
	struct student s1;
	// storing dadta in struct	
		strcpy(s1.name,"vijay");
		s1.rollno=23;
		s1.per=33.99;
	// printing data stored in struct 
	printf("\n%d",s1.rollno);
	printf("\n%s",s1.name);
	printf("\n%.2f\n\n",s1.per);


	// union can hold only one type of data at a time	
	union employee e1;

	e1.empno=123;			// store integer in union 
	printf("\n%d",e1.empno);	// print the data stored in union

	strcpy(e1.name,"vijay");			// store string in union
	printf("\n%s",e1.name);	// print string stored in union

	e1.salary=51;			// store float data in union
	printf("\n%.2f",e1.salary);	// print data stored in union

}