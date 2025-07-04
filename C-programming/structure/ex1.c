#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
     Student s1;

    // Assign values
    s1.roll = 1;
    strcpy(s1.name, "Anup");
    s1.marks = 90.5;

    // Print values
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}