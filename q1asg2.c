#include <stdio.h>

int main() {
    int num;

    printf("Enter the number of students: ");
    scanf("%d", &num);

    int marks[num];

    printf("Enter the marks of %d students:\n", num);
    for (int i = 0; i < num; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < num; i++) {
        marks[i] += 5;
    }

    printf("\nUpdated marks of students (after increasing by 5):\n");
    for (int i = 0; i < num; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
