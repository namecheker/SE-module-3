/*
8. WAP to reverse a string and check that the string is palindrome or not
*/

//pending

#include<stdio.h>
int main(){
	char a[20],b[20];
	int i,j,c=0,d=0;

	printf("\n Enter string :");
	gets(a);

	for(i=0;a[i]!='\0';i++){
		c++;
	}
	c=c-1;
	for(i=0;i<=a[i]!='\0';i++){
		b[i]=a[c];
		c--;
	}
	for(i=0;i<=a[i]!='\0';i++){
		if(a[i]!=b[i]){
			d=1;
		}
	}
	(d==0)?(printf("\n Palindrome string")):(printf("\n not Palindrome string"));
}