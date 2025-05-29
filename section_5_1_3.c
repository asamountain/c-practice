/*
 * =====================================================================================
 *
 *       Filename:  section_5_1_3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 10일 14시 25분 36초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
// Practice: Logical operators, short-circuit evaluation, and side effects.
// Concepts: Logical AND/OR, short-circuiting, side effects, operator precedence.
#include <stdio.h>
int main(){
        int i,j,k;
        i=3;j=4;k=5;
        printf("%d ", i<j || ++j <k);
        printf("%d %d %d\n", i, j, k);
        printf("1, 3 4 5\n");
        /*  because, right operand from || will not accessed. because i<j (left operand) is false. */


        int a,b,c;
        a=7; b=8; c=9;
        printf("%d", a-7 && b++ < c);
        printf("%d %d %d\n", a, b, c);
        printf("0, 7, 8, 9");


        int e,f,g;
        e=7;f=8;g=9;
        printf("%d ", (e=f)||(f=g));
        printf("%d %d %d\n", e,f,g );
        printf("0 because, false || false\n");


        int l,m,n;
        l=1;m=1;n=1;
        printf("%d ", ++l || ++m && ++n);
        printf("%d %d %d\n", l, m, n);
        printf("1 , 2 2 2");

        return 0;
}
