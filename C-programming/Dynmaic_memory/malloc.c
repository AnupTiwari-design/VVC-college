#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    arr = (int *) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("malloc failed!\n");
        return 1;
    }

    printf("Initial values (malloc):\n");
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
        printf("%d ", arr[i]);
    }
    printf("\n");

    arr = (int *) realloc(arr, 8 * sizeof(int));
    if (arr == NULL) {
        printf("realloc failed!\n");
        return 1;
    }

    arr[5] = 60;
    arr[6] = 70;
    arr[7] = 80;

    printf("After realloc (size = 8):\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    int *newArr = (int *) calloc(5, sizeof(int));
    if (newArr == NULL) {
        printf("calloc failed!\n");
        return 1;
    }

    printf("calloc initialized values:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", newArr[i]);
    }
    printf("\n");

    free(newArr);

    return 0;
}