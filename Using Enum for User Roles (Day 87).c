#include <stdio.h>

int main() {
   
    enum Role { ADMIN, USER, GUEST };


    enum Role currentRole = USER;

    switch (currentRole) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Hello User! You have limited access.\n");
            break;
        case GUEST:
            printf("Hi Guest! Please sign up or log in for more features.\n");
            break;
        default:
            printf("Unknown role.\n");
    }

}