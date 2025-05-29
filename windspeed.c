/*
 * =====================================================================================
 *
 *       Filename:  windspeed.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 11일 10시 26분 26초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
// Practice: Classifying wind speed into categories.
// Concepts: Integer input, conditional statements (if-else), output formatting.
#include <stdio.h>

int main(){

        int speed;
        printf("Enter a wind speed: ");
        scanf("%d", &speed);
        if(speed<1){
                printf("calm");
        }else if(speed<3){
                printf("Light air");
        }else if(speed<28){
                printf("Breeze");
        }else if(speed<48){
                printf("Gale");
        }else if(speed<64){
                printf("Storm");
        }else if(speed>64){
                printf("Hurricane");
        }
        return 0;
}

