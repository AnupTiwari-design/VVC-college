#include <stdio.h>
#include <ctype.h>   // for isalpha(), isdigit(), isspace(), tolower()

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read full line including spaces

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // convert to lowercase for easy vowel check

        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else if (isspace(ch)) {
            spaces++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);

    return 0;
}