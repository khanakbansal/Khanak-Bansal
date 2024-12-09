#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertAtFront(int arr[], int *size, int val) {
    for (int i = *size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = val;
    (*size)++;
}

void insertAtPosition(int arr[], int *size, int pos, int val) {
    if (pos < 1 || pos > *size + 1) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = *size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    (*size)++;
}

void insertAtEnd(int arr[], int *size, int val) {
    arr[*size] = val;
    (*size)++;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("Original Array: ");
    printArray(arr, size);

    insertAtFront(arr, &size, 5);
    printf("After Insert at Front: ");
    printArray(arr, size);

    insertAtPosition(arr, &size, 3, 25);
    printf("After Insert at Position 3: ");
    printArray(arr, size);

    insertAtEnd(arr, &size, 60);
    printf("After Insert at End: ");
    printArray(arr, size);

    return 0;
}
