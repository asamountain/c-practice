/*
 * =====================================================================================
 *
 *       Filename:  phone_number.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 08일 18시 58분 10초
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

        int first, middle, last;
        
        printf("Enter phone number [(xxx)] xxx-xxxx: ");
        scanf("(%d) %d-%d", &first, &middle, &last);
        printf("You entered %d.%d.%d", first, middle, last);

        return 0;
}

