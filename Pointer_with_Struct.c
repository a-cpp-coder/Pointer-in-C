// Coder dang cap cao, chan chinh SW Engineer

#include <stdio.h>

int main(void) {
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today, *datePtr;    // the hien su am hieu

    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2023;

    printf("Today is: %i/%i/%i\n", datePtr->month, datePtr->day, datePtr->year);
    
    return 0;
}