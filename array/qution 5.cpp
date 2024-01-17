/*5. WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice*/



#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort
void bubbleSort(int arr[], int size, int order) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            // For ascending order
            if (order == 1 && arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
            // For descending order
            else if (order == 2 && arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size];

    // Input for the first array
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Input for the second array
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    int choice;
    printf("Choose the sorting order:\n");
    printf("1. Ascending order\n");
    printf("2. Descending order\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Sorting the arrays based on user's choice
    bubbleSort(array1, size, choice);
    bubbleSort(array2, size, choice);

    // Displaying the sorted arrays
    printf("\nSorted array 1: ");
    printArray(array1, size);

    printf("Sorted array 2: ");
    printArray(array2, size);

    return 0;
}
