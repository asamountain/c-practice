/*
 * =====================================================================================
 *
 *       Filename:  ISBN.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 08일 18시 34분 06초
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

        int gs1,group_identifier,publisher_code,item_code,check_digit;

        printf("Enter ISBN: ");
        scanf("%d-%d-%d-%d-%d", &gs1, &group_identifier, &publisher_code, &item_code, &check_digit);
        printf("\nGS1 prefix: %d\n", gs1);
        printf("Group identifier: %d\n", group_identifier);
        printf("Publisher Code: %d\n", publisher_code);
        printf("Item number: %d\n", item_code);
        printf("Check digit: %d\n", check_digit);



        return 0;
}
