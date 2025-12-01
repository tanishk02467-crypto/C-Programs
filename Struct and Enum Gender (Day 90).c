#include <stdio.h>


enum Gender { MALE, FEMALE, OTHER };


struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
   
    struct Person p1 = {"Amit", MALE};
    struct Person p2 = {"Sara", FEMALE};
    struct Person p3 = {"Alex", OTHER};

   
    printf("Name: %s | Gender: ", p1.name);
    switch (p1.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

    printf("Name: %s | Gender: ", p2.name);
    switch (p2.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

    printf("Name: %s | Gender: ", p3.name);
    switch (p3.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

   
}