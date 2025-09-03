#include <stdio.h>

int main() {
    char name[50], street[100], city[50], state[50];
    int pin;

   
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your street/house address: ");
    fgets(street, sizeof(street), stdin);

    printf("Enter your city: ");
    fgets(city, sizeof(city), stdin);

    printf("Enter your state: ");
    fgets(state, sizeof(state), stdin);

    printf("Enter your PIN code: ");
    scanf("%d", &pin);

  
    printf("\n----- Your Address -----\n");
    printf("%s", name);
    printf("%s", street);
    printf("%s", city);
    printf("%s", state);
    printf("PIN Code: %d\n", pin);
}
