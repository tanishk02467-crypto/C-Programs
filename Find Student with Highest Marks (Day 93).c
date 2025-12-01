#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i, topIndex = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    for (i = 1; i < 5; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("\n--- Topper ---\n");
    printf("Name: %s | Roll No: %d | Marks: %.2f\n",
           students[topIndex].name, students[topIndex].roll_no, students[topIndex].marks);

   
}