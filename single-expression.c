/*
 * =====================================================================================
 *
 *       Filename:  single-expression.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 10일 18시 16분 36초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

// Practice: Using single expressions, ternary operator, and absolute value.
// Concepts: Conditional expressions, ternary operator, arithmetic expressions.

#include <stdio.h>
int main(){

        int n=5;

        if(n == 1-10){
                printf("n is between 1 and 10\n");
        }
        int i;
        i=-17;
        printf("%d\n", i>=0? i : -i);

        return 0;


}
