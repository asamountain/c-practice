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

        int num1,denum1,num2,denum2,result_num, result_denum; 
        printf("Enter two fractions seperated by a plus sign: "); 
        scanf("%d/%d+%d/%d", &num1, &denum1, &num2, &denum2); 
        
        result_denum = denum1*denum2;
        result_num = denum2*num1 + denum1*num2;

        printf("The sum is %d/%d\n", result_num, result_denum);

        return 0;
}

