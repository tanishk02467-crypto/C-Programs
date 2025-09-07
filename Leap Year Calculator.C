#include <stdio.h>

int main() {
    int year;

   
    printf("----- Leap Year Checker -----\n");
    printf("Enter a year: ");
    scanf("%d", &year);

   
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a Leap Year.\n", year);
            } else {
                printf("%d is Not a Leap Year.\n", year);
            }
        } else {
            printf("%d is a Leap Year.\n", year);
        }
    } else {
        printf("%d is Not a Leap Year.\n", year);
    }
}
