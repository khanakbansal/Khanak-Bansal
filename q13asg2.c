#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5}, size = 5, last = arr[size - 1], i;
    for (i = size - 1; i > 0; i--) arr[i] = arr[i - 1];
    arr[0] = last;
    for (i = 0; i < size; i++) printf("%d ", arr[i]);
    return 0;
}
