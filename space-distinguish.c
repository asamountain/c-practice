/*
 * =====================================================================================
 *
 *       Filename:  space-distinguish.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 08일 11시 39분 50초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

// Practice: Reading and printing pairs of floating-point numbers with delimiters.
// Concepts: Floating-point input, for loop, scanf formatting, output formatting.

#include <stdio.h>

int main(){

        float a,b;
        for(int i=0;i<10;i++){
        scanf("%f, %f\n", &a,&b);
        printf("%f, %f\n",a,b);
}
        return 0;
}

