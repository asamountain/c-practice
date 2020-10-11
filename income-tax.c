/*
 * =====================================================================================
 *
 *       Filename:  income-tax.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 11일 10시 32분 06초
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
        int income;
        printf("Enter a taxable income: ");
        scanf("%d", &income);
        if(income<750){
                printf("Tax due: %.2f",income*0.01);

        }else if(income<=2250){
        printf("Tax due: %.2f", income*0.02);}
        else if(income<=3750){
                printf("Tax due: %.2f", income*0.03);
        }else if(income<=5250){
                printf("Tax due: %.2f", income*0.04);
                
        }else if(income<=7000){

                printf("Tax due: %.2f", income*0.05);
        }else if(income>7000){

                printf("Tax due: %.2f", income*0.06);
        }
        return 0;
}

