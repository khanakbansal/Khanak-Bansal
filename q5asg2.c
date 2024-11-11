#include <stdio.h>

int main() {
    int num, i, sum = 0;
    
    printf("Enter the number of students: ");
    scanf("%d", &num);

    int marks[num];
    
    printf("Enter the marks of %d students\n", num);
    for(i = 0; i < num; i++) {
        scanf("%d", &marks[i]);
    }
    
    for(i = 0; i < num; i++) {
        sum += marks[i];  
    }
    
    printf("\nThe sum of all the scores is: %d\n", sum);
    
    return 0;
}
