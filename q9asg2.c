#include <stdio.h>

int main() {
    int num, i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Array cannot have zero or negative size.\n");
        return 0;
    }
    
    int arr[num];
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (num == 1) {
        printf("The peak element is: %d\n", arr[0]);
        return 0;
    }
    
    if (arr[0] >= arr[1]) {
        printf("The peak element is: %d\n", arr[0]);
        return 0;
    }
    

    if (arr[num-1] >= arr[num-2]) {
        printf("The peak element is: %d\n", arr[num-1]);
        return 0;
    }
    
    for (i = 1; i < num - 1; i++) {
        if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) {
            printf("The peak element is: %d\n", arr[i]);
            return 0;
        }
    }
    
    printf("No peak element found.\n");
    
    return 0;
}
