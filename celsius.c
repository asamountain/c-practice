/*
 * =====================================================================================
 *
 *       Filename:  celsius.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 09월 14일 17시 04분 36초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main(void){

        float fahrenheit, celsius;
        
        printf("Enter Fahrenheit temperature: ");
        scanf("%f", &fahrenheit);
scanf();
        celsius=(fahrenheit-FREEZING_PT)*SCALE_FACTOR;
        printf("Celsius equivalent : %.1f\n", celsius);

        return 0;

}
