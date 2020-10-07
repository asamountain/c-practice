/*
 * =====================================================================================
 *
 *       Filename:  dollar-cent.c
 *
 *    Description: tax calculator 
 *
 *        Version:  1.0
 *        Created:  2020년 10월 07일 14시 54분 12초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void){

        float dollar_cent;
        float tax=1.05f;
        printf("Enter an amount of dollar :");
        scanf("%f",&dollar_cent); /* without & results 'double'. why? */
        printf("With tax added: $%f", dollar_cent * tax);

        return 0;
}
