/*  15.Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.  */


#include<stdio.h>
int main(){
	int phy,chemistry,mathematics,total_marks;
	
	
	//input marks 
	printf("enter the marks obtained in physics:");
	scanf("%d",&phy);
	
	printf("enter the marks obtained in chemistry:");
	scanf("%d",&chemistry);
	
	printf("enter the marks obtained in mathematics:");
	scanf("%d",&mathematics);
	
	printf("total marks of ,maths,physics and chemistry:");
	scanf("%d",&total_marks);
	
	//checking eligibility 
	
	switch(1){
		case (phy>=65 && chemistry>=55 && mathematics>=50 && total_marks>=190):
		case (phy+mathematics>=140):
			printf("the candidate is eligible for admission. \n");
	    	break;
    	
		
		
	}default;
		printf("the candidate is not eligible for admission. \n");
}
