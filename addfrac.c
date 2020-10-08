/*
 * =====================================================================================
 *
 *       Filename:  addfrac.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 08일 12시 51분 54초
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

        int num1,denom1,num2,denom2,result_num, result_denom; 
        printf("Enter first fraction: "); 
        scanf("%d / %d", &num1, &denom1); 
        printf("Enter second fraction: "); 
        scanf("%d / %d", &num2, &denom2); 
        result_num = num1 * denom2 + num2 * denom1; 
        result_denom = denom1 * denom2;
        printf("The sum is %d/%d\n", result_num, result_denom);

        return 0;
}

