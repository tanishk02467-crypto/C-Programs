#include <stdio.h>

int main() {
    
    enum TrafficLight { RED, YELLOW, GREEN };

    enum TrafficLight signal = YELLOW;

   
    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid signal\n");
    }


}