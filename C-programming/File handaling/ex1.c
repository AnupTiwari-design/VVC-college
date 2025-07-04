#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data1.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello Anup!\n");
    fprintf(fp, "File handling is difficult.\n");

    fclose(fp);
    return 0;
}