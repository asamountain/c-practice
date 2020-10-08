/*
 * =====================================================================================
 *
 *       Filename:  printf-floats.c
 *
 *    Description: see how the output is going 
 *
 *        Version:  1.0
 *        Created:  2020년 10월 08일 09시 21분 25초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(){


        printf("%6d, %5.6d\n", 6, 1040);
        printf("%5d\n", 42);
        printf("%12.4e\n", 30.253 );
        printf("%.4f\n", 83.162);
        printf("%-6.2g\n", .0000009979);
        printf("%-4d\n", 123);

        return 0;
}
