#include <stdio.h>


struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopper(struct Student students[], int n) {
    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }
    return students[topIndex]; 
}

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    
    struct Student topper = findTopper(students, 5);

    
    printf("\n--- Topper ---\n");
    printf("Name: %s | Roll No: %d | Marks: %.2f\n",
           topper.name, topper.roll_no, topper.marks);

    
}