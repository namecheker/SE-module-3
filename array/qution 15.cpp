//15.Store 5 numbers in array and sort it in ascending order




#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int numbers[5];

    // Input from the user
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Sorting the array in ascending order
    bubbleSort(numbers, 5);

    // Displaying the sorted array
    printf("\nSorted array in ascending order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

}
