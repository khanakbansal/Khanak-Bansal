#include <stdio.h>

int main() {
    int num, i;
    
    printf("Enter the number of students: ");
    scanf("%d", &num);
    
    int marks[num];
    
    
    printf("Enter the marks of %d students\n", num);
    for(i = 0; i < num; i++) {
        scanf("%d", &marks[i]);
    }
    
    int count = 0; 
    printf("\nStudents who scored 99 are:\n");
    
    for(i = 0; i < num; i++) {
        if(marks[i] == 99) {
            printf("Student %d (Index %d) scored 99.\n", i + 1, i); 
            count++; 
        }
    }
    
    if(count == 0) {
        printf("No student scored 99.\n");
    } else {
        printf("\nTotal number of students who scored 99: %d\n", count);
    }
    
    return 0;
}
