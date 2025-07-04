#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], copy[100], combined[200];

    // Input first string
    printf("Enter first string (no spaces): ");
    scanf("%s", str1);

    // Input second string
    printf("Enter second string (no spaces): ");
    scanf("%s", str2);

    // 1. strlen()
    printf("Length of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n", strlen(str2));

    // 2. strcpy()
    strcpy(copy, str1);
    printf("Copy of first string: %s\n", copy);

    // 3. strcat()
    strcpy(combined, str1);   // start with str1
    strcat(combined, str2);   // append str2
    printf("After concatenation: %s\n", combined);

    // 4. strcmp()
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}