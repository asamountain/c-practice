/*
 * =====================================================================================
 *
 *       Filename:  address-void.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 09월 07일 21시 49분 19초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

// Practice: Using pointers and dereferencing (undefined behavior example).
// Concepts: Pointers, dereferencing, uninitialized pointers, memory access.

#include <stdio.h>

int main(void){
        int x;
        int *ptr_p;
        x=5;
printf("%d\n", *ptr_p);
        return 0;
}
