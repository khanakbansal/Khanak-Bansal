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
    
    int max = marks[0];
    int min = marks[0];
    
    for(i = 1; i < num; i++) {
        if(marks[i] > max) {
            max = marks[i];  
        }
        if(marks[i] < min) {
            min = marks[i]; 
        }
    }
    
    printf("\nThe maximum score is: %d\n", max);
    printf("The minimum score is: %d\n", min);
    
    return 0;
}
