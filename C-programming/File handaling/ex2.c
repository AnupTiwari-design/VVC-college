#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s1 = {1, "Anup", 95.5};

    FILE *fp = fopen("student.txt", "w");

    if (fp == NULL) {
        printf("File error!\n");
        return 1;
    }

    // Write struct data using fprintf
    fprintf(fp, "%d %s %.2f\n", s1.roll, s1.name, s1.marks);

    fclose(fp);
    return 0;
}