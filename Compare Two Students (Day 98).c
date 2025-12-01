#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int areEqual(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks) {
        return 1; 
    }
    return 0;
}

int main() {
    struct Student s1, s2;

    printf("Enter details of first student:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll No: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

  
    printf("\nEnter details of second student:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll No: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    if (areEqual(s1, s2)) {
        printf("\nThe two students are IDENTICAL.\n");
    } else {
        printf("\nThe two students are DIFFERENT.\n");
    }

    return 0;
}