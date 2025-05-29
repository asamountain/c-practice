/*
 * =====================================================================================
 *
 *       Filename:  section_4_3_11.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 09일 16시 06분 05초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

// Practice: Operator precedence and mixed arithmetic/logic expressions.
// Concepts: Integer arithmetic, operator precedence, mixed expressions, output formatting.

#include <stdio.h>
int main(){

        int a,b,c,d;

        a=4;
        b=1;
        c=3;
        d=1;

        printf("%d\n", a/b%c/d);
        printf("%d\n", -a -b +c - +d);
        printf("%d\n", a*-b/c-d);



        return 0;
}
