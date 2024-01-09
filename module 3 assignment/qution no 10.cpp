/* 10. find the area of a rectangle prisam formula A=2(wl+hl+hw) */


#include<stdio.h>
int main(){
	
	int a,w,l,h;
	
	printf("enter the width of rectangle prisam");
	scanf("%d",&w);
	
	printf("enter the length of rectangle prisam");
	scanf("%d",&l);
	
	printf("enter the height of rectangle prisam");
	scanf("%d",&h);
	
	// area of a rectangle 
	
	a=2*(w*l+h*l+h*w);
	
	printf("area of a rectangle prisam is %d",a);
	
	

}
