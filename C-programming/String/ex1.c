#include<stdio.h>
int main() {
    char name[50];

    // Ask the user to enter their full name
    printf("Enter your full name: ");
    // input without space
    //scanf("%s", name);
   
    fgets(name, sizeof(name), stdin);


    printf("Hello %s", name);


}


