#include <stdio.h>

int main() {
    int arr[5];
    int max;

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];  // assume first element is max

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];  // update max if current element is greater
        }
    }

    printf("Maximum = %d\n", max);

    return 0;
}