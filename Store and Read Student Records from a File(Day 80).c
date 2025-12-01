#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Cannot open file for writing.\n");
        return 1;
    }

    fprintf(fp, "Asha 101 85\n");
    fprintf(fp, "Ravi 102 92\n");

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open file for reading.\n");
        return 1;
    }

    printf("Student Records:\n");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
   
}