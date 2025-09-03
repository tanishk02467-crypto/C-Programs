#include <stdio.h>

int main() {
    int year;
    float population = 100000;

    printf("Initial Population: 100000\n");
    printf("Population growth over 10 years (10%% increase per year):\n");

    for (year = 1; year <= 10; year++) {
        population = population + (population * 0.10); 
        printf("Year %d: %.0f\n", year, population);   
    }
}