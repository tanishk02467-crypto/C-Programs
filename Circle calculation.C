#include <stdio.h>
#define PI 3.14159   

int main() {
    float radius, area, circumference;

    
    printf(" Circle Area & Circumference Calculator \n");
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    
    printf("\n");
    printf("Radius         : %.2f\n", radius);
    printf("Area           : %.2f\n", area);
    printf("Circumference  : %.2f\n", circumference);

    
}
