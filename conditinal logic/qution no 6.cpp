//6. Find the Character Is Vowel or Not


#include<stdio.h>
int main(){
	
	char character;
	
	//accepting input from the user 
	
	printf("enter a character:");
	scanf("%c",&character);
	
	//checking if the character is a vowel
	switch (character) {
		case 'a':
		case'A':
		case'e':
		case'E':
		case'i':
		case'I':
		case'o':
		case'O':
		case'u':
		case'U':
			
			printf("%c is a vowel \n",character);
		break;
		default:
			printf("%c is not a vowel \n ",character);
			
				
	}
}
