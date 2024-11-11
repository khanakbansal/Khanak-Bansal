#include<stdio.h>

int main() {
    int num, originaln, r, sum = 0, digit = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    originaln = num;
    
    while (originaln > 0) {
        originaln /= 10;
        digit++;
    }
    
    originaln = num;
    
    while (originaln > 0) {
        r = originaln % 10;
        sum += r * r * r; 
        originaln /= 10;
    }
    
    
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}