#include<stdio.h>

int main() {
    int num1,num2,sum;
    printf("Enter any two numbers \n");
    scanf("%d %d", &num1, &num2);
    sum=num1+~num2+1;
    printf("Difference is %d", sum);
    return 0;
}

