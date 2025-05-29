/*
 * =====================================================================================
 *
 *       Filename:  address-print2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 09월 07일 21시 18분 27초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

// Practice: Pointer assignment, dereferencing, and memory addresses.
// Concepts: Pointers, address-of operator, dereferencing, memory addresses.

#include <stdio.h>

int main(){

        int x;
        int *ptr_p;

        x=5;
        ptr_p = &x;

        printf("%p address of &x and &ptr_p \n", &ptr_p);
        *ptr_p=10;

        printf("%d\n", x);
printf("%p *ptr_p's address after 10\n", &ptr_p);

        return 0;


}

