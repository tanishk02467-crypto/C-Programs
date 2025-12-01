#include <stdio.h>

int main() {
 
    enum Month {
        JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
        JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
    };

    int daysInMonth[] = {
        31, // JANUARY
        28, // FEBRUARY
        31, // MARCH
        30, // APRIL
        31, // MAY
        30, // JUNE
        31, // JULY
        31, // AUGUST
        30, // SEPTEMBER
        31, // OCTOBER
        30, // NOVEMBER
        31  // DECEMBER
    };

    const char *monthNames[] = {
        "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE",
        "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"
    };

    for (int m = JANUARY; m <= DECEMBER; m++) {
        printf("%s has %d days\n", monthNames[m], daysInMonth[m]);
    }

}