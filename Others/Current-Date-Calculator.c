#include <stdio.h>
#include <conio.h>
#include <time.h>

int main() {
    int year, month, day, currentTimestamp;
    int daysSinceStartOfYear, yearsSince1970, i;

    // Get the current Unix timestamp.
    currentTimestamp = time(0);

    // Calculate the number of complete years since 1970.
    yearsSince1970 = currentTimestamp / ((365 * 3 + 366) * 24 * 60 * 60 / 4);
    year = yearsSince1970 + 1970;

    // Calculate the number of days elapsed in the current year.
    daysSinceStartOfYear =
        (currentTimestamp % ((365 * 3 + 366) * 24 * 60 * 60 / 4))
        / (24 * 60 * 60);

    // Iterate through the elapsed days to determine the current day index.
    for (i = 1; i <= daysSinceStartOfYear; i++) {
    }

    // Determine the month and calculate the day within that month.
    if (i <= 31) {
        month = 1;
        int j = 0;
        day = i - j;
    }

    if (i > 31 && i <= 59) {
        month = 2;
        int j = 31;
        day = i - j;
    }

    if (i > 59 && i <= 90) {
        month = 3;
        int j = 59;
        day = i - j;
    }

    if (i > 90 && i <= 120) {
        month = 4;
        int j = 90;
        day = i - j;
    }

    if (i > 120 && i <= 151) {
        month = 5;
        int j = 120;
        day = i - j;
    }

    if (i > 151 && i <= 181) {
        month = 6;
        int j = 151;
        day = i - j;
    }

    if (i > 181 && i <= 212) {
        month = 7;
        int j = 181;
        day = i - j;
    }

    if (i > 212 && i <= 243) {
        month = 8;
        int j = 212;
        day = i - j;
    }

    if (i > 243 && i <= 273) {
        month = 9;
        int j = 243;
        day = i - j;
    }

    if (i > 273 && i <= 304) {
        month = 10;
        int j = 273;
        day = i - j;
    }

    if (i > 304 && i <= 334) {
        month = 11;
        int j = 304;
        day = i - j;
    }

    if (i > 334 && i <= 365) {
        month = 12;
        int j = 334;
        day = i - j;
    }

    // Display the calculated date.
    printf("today's date: %d/%d/%d", month, day, year);

    return 0;
}

