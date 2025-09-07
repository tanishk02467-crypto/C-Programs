#include <stdio.h>

int main() {
    char ch;

    
    printf(" Vowel or Consonant Checker \n");
    printf("Enter a single alphabet: ");
    scanf("%c", &ch);

    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Check if vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a Vowel.\n", ch);
        } else {
            printf("%c is a Consonant.\n", ch);
        }
    } else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

  
}
