// 3. WAP to find reverse of string using recursion


#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }

    // Swapping characters at start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursively calling reverseString with updated indices
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); // Inputting the string

    int len = strlen(str);
    reverseString(str, 0, len - 1); // Reversing the string

    printf("Reversed string: %s\n", str);
    
}
