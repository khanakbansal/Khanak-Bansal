#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}

int main() {
    int n, count = 0;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];  
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;  
        }
    }
    
    printf("Number of prime numbers: %d\n", count);
    
    return 0;
}
