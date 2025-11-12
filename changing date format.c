#include <stdio.h>
#include <string.h>

int main() {
    char date[20], newDate[30];
    char day[3], month[3], year[5];

    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strncpy(year, date + 6, 4);
    year[4] = '\0';

    if (strcmp(month, "04") == 0) {
        sprintf(newDate, "%s-Apr-%s", day, year);
        printf("Formatted date: %s\n", newDate);
    } else {
        printf("Month is not 04. No conversion applied.\n");
    }

}