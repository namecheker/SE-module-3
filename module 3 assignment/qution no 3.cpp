/*3. WAP to Find Area And Circumference of Circle*/

#include<stdio.h>
int main(){

	float r,a,p;
    printf("enter the value of r:");
    scanf("%f",&r);
    
    //area of circle 
    
    a=3.14*r*r;
    
    printf("the erea of circle is %f \n",a);
    
    //circumference of circle 
    
    p=2*3.14*r;
    printf(" the cricumference of circle %f\n",p);
    

}
