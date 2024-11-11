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
    
    int found = -1; 
    for(i = 0; i < num; i++) {
        if(marks[i] == 99) {
            found = i; 
            break;
        }
    }
    
    if(found != -1) {
        printf("The first student who scored 99 is at index %d (Student %d).\n", found, found + 1);
    } else {
        printf("No student scored 99.\n");
    }
    
    return 0;
}
