/*#include <stdio.h>

int main() {
    
    int marks[] = {42, 82, 76, 93, 64, 56, 67, 38};  
    int n = sizeof(marks) / sizeof(marks[0]); 
    int i;
    
    
    for(i = 0; i < n; i++) {
        printf("Marks: %d, Grade: ", marks[i]);
        
        
        if(marks[i] >= 75) {
            printf("A Grade\n");
        } else if(marks[i] >= 60) {
            printf("B Grade\n");
        } else if(marks[i] >= 40) {
            printf("C Grade\n");
        } else {
            printf("D Grade\n");
        }
    }
    
    return 0;
}*/


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
    
    printf("\nGrades of students:\n");
    for(i = 0; i < num; i++) {
        printf("Marks: %d, Grade: ", marks[i]);
        
        if(marks[i] >= 75) {
            printf("A Grade\n");
        } else if(marks[i] >= 60) {
            printf("B Grade\n");
        } else if(marks[i] >= 40) {
            printf("C Grade\n");
        } else {
            printf("D Grade\n");
        }
    }
    
    return 0;
}

