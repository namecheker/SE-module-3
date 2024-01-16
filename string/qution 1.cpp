/*
1. Write a program in C to find the length of a string without using library
functions.
*/

#include<stdio.h>
int main(){
	char a[100];
	int i,count=0;

	printf("\n Enter string : ");
	getchar();
	fgets(a,sizeof(a),stdin);   //here fgets is used insted of gets because of buffering issues

	for(i=0;i<=a[i]!='\0';i++){
		count++;
	}
	printf("\n Length of string is %d ",count);
}


