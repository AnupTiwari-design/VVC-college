#include <stdio.h>

int main() {
    int arr[5];
    
    // Input: taking 5 elements from user
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Output: printing array in reverse order
    printf("Reversed array:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}