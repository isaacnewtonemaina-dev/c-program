#include <stdio.h>

int main() {
    int arr[10] = {2, 4, 6, 8, 12}; // Size larger than elements to allow insertion
    int size = 5;
    int new_number = 10;
   // Position index to insert
    int pos = 4; 

    // Shift elements to the right to make space
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new number
    arr[pos] = new_number;
    size++;

    // Display output using a for loop
    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}