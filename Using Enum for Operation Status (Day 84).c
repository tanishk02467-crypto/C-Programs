#include <stdio.h>

int main() {
   
    enum Status { SUCCESS, FAILURE, TIMEOUT };

    enum Status currentStatus = TIMEOUT;

    switch (currentStatus) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out. Check your connection or retry.\n");
            break;
        default:
            printf("Unknown status.\n");
    }

}