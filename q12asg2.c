#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deleteAtFront(int arr[], int *size) {
    for (int i = 0; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void deleteAtPosition(int arr[], int *size, int pos) {
    if (pos < 1 || pos > *size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = pos - 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void deleteAtEnd(int *size) {
    if (*size > 0) {
        (*size)--;
    }
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("Original Array: ");
    printArray(arr, size);

    deleteAtFront(arr, &size);
    printf("After Delete at Front: ");
    printArray(arr, size);

    int pos = 2;
    deleteAtPosition(arr, &size, pos);
    printf("After Delete at Position %d: ", pos);
    printArray(arr, size);

    deleteAtEnd(&size);
    printf("After Delete at End: ");
    printArray(arr, size);

    return 0;
}
