/*
 * =====================================================================================
 *
 *       Filename:  upc-one-digit.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 09일 19시 11분 15초
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

        int i, n1,n2,n3,n4,n5,n6,j1,j2,j3,j4,j5, first_sum, second_sum, last_digit;
        printf("Enter the first 11 digits of a UPC: ");
        scanf("%11d", &i);
        
        n1=i/10000000000;
        n2=i/1000000000%10;
        n3=i/100000000%10;
        n4=i/10000000%10;
        n5=i/1000000%10;
        n6=i/100000%10;

        j1=i/10000%10;
        j2=i/1000%10;
        j3=i/100%10;
        j4=i/10%10;
        j5=i%10;

        printf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d\n",n1,n2,n3,n4,n5,n6,j1,j2,j3,j4,j5);

        first_sum = n1+n3+n5+j1+j3+j5;
        second_sum = n2+n4+n6+j2+j4;
        printf("sums: %d %d\n", first_sum, second_sum);

        last_digit = 9-(((first_sum*3+second_sum)-1)%10);


        printf("%d", last_digit);

        return 0;
}

