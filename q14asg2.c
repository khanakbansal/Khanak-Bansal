#include <stdio.h>

int main() {
    int size, flag = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) if (arr[i] == arr[j]) goto skip;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                flag = 1;
                break;
            }
        }
        skip:;
    }
    if (!flag) printf("-1");
    return 0;
}
