//16.Accept 5 numbers from user and perform sum of array




#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    // Input from the user
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Calculate the sum as you input the numbers
        sum += numbers[i];
    }

    // Displaying the array
    printf("\nEntered array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    // Displaying the sum of the array elements
    printf("\nSum of the array elements: %d\n", sum);

    
}
