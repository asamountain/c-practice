/*
 * =====================================================================================
 *
 *       Filename:  date-display.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 08일 16시 46분 31초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

// Practice: Reading and displaying a date in a different format.
// Concepts: Integer input, formatted input/output, scanf/printf formatting.

#include <stdio.h>

int main(){

        int month, day, year;

        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        printf("You entered the date %d%.2d%.2d", year, month, day);
        return 0;

}
