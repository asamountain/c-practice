/*
 * =====================================================================================
 *
 *       Filename:  upc.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 09일 13시 59분 26초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

// Practice: Calculating the check digit for a UPC code.
// Concepts: Integer input, formatted input, arithmetic operations, modular arithmetic.

#include <stdio.h>

int main(){

        int d, i1, i2 ,i3 ,i4 ,i5 ,j1, j2, j3, j4 ,j5, first_sum, 
            second_sum, total;

        printf("Enter the first(single) digit: ");
        scanf("%1d", &d);
        printf("Enter first group of five digits: ");
        scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
        printf("Enter second group of five digits: ");
        scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

        first_sum = d+ i2+ i4+ j1 + j3 + j5;
        second_sum = i1 + i3 + i5 + j2 + j4;
        total = 3 * first_sum+second_sum;

        printf("Check digit: %d\n", (10-(total%10))%10);



        return 0;
}
