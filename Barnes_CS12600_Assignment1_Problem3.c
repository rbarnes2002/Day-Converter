//Riley Barnes CS 12600
//Assignment 1 Problem 3
//C Program that converts days into years, weeks and days, hours, minutes and seconds
//referenced https://www.geeksforgeeks.org/program-convert-given-number-days-terms-years-weeks-days/
#include <stdio.h>

int main() {
    int days, years, weeks, remainingDays, hours, mins, secs;

    //take the inputted number of days
    printf("Enter number of days: ");
    scanf("%d", &days);

    //calculates years, weeks, remaining days, hours, minutes, and seconds
    years = days / 365;
    weeks = (days % 365) / 7;
    remainingDays = (days % 365) % 7;
    hours = days * 24;
    mins = hours * 60;
    secs = mins * 60;

    //print the result
    printf("Years: %d\n", years);
    printf("Weeks: %d and Days: %d\n", weeks, remainingDays);
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", mins);
    printf("Seconds: %d\n", secs);

    return 0;
}