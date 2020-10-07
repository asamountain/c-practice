/*
 * =====================================================================================
 *
 *       Filename:  math1.c
 *
 *    Description: arthmathic
 *
 *
 *        Version:  1.0
 *        Created:  2020년 10월 07일 16시 00분 17초
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

        int x;

        printf("Enter x value : ");
        scanf("%d", &x);
        printf("3x*x*x*x*x*x + 2x*x*x*x - 5x*x*x - x*x + 7*x - 6 = %d", (3*x*x*x*x*x) +(2*x*x*x*x)-(5*x*x*x-x*x)+(7*x)-6);
        

        return 0;
}
