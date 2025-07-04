#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str); 

    int len = strlen(str);
    int start = 0, end = len - 1;
    int isPalindrome = 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }
    if (isPalindrome)
        printf("It is a palindrome.\n");
    else
        printf("It is not a palindrome.\n");

    return 0;
}