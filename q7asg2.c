#include <stdio.h>

int main() {
    int num, i;
    
    printf("Enter the number of students: ");
    scanf("%d", &num);
    
    int marks[num];
    
    printf("Enter the marks of %d students \n", num);
    for(i = 0; i < num; i++) {
        scanf("%d", &marks[i]);
    }
    
    printf("\nResults for each score:\n");
    for(i = 0; i < num; i++) {
        if(marks[i] % 2 == 0) {
            printf("Marks: %d is Even\n", marks[i]);
        } else {
            printf("Marks: %d is Odd\n", marks[i]);
        }
    }
    
    return 0;
}
