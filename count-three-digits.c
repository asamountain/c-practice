/*
 * =====================================================================================
 *
 *       Filename:  count-three-digits.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 11일 09시 43분 41초
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
        int num, count;
        count=0;
        printf("Enter a number: ");
        scanf("%d", &num);
        if(99>=num && num>=10){
                count=2;
        }else if(1<num && num<10){
                count=1;
        }else if(100<=num&&num<=999){
                count=3;
        }else if(1000<=num&&num<=9999){
                count=4;
        }
        printf("The number %d has %d digits.", num, count);
        return 0;
}
