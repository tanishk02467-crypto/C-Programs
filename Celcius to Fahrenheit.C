#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    
    printf("- Celsius to Fahrenheit Converter -\n");
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    
    fahrenheit = (celsius * 9 / 5) + 32;

    
    printf("\n");
    printf("Temperature in Celsius    : %.2f °C\n", celsius);
    printf("Temperature in Fahrenheit : %.2f °F\n", fahrenheit);

    
}
