#include <stdio.h>

int main() {
    int arr[10] = {2, 4, 6, 8, 12}; 
    int size = 5;
    int new_number = 10;
   
    int pos = 4; 

    
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos] = new_number;
    size++;

    
    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
