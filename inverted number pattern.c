#include <stdio.h>

int main() {
    int i, j, space;

    printf(" Inverted Number Pattern ");

    
    for (i = 5; i >= 1; i--) {
        
        for (space = 1; space < i; space++) {
            printf(" ");
        }

        
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n"); 
    }

   
}
