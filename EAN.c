/*
 * =====================================================================================
 *
 *       Filename:  EAN.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 09일 20시 49분 58초
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


        int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13;
        int first_sum, second_sum;

        printf("Enter the first 12 digits of an EAN: ");
        scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12);

        first_sum=n2+n4+n6+n8+n10+n12;
        second_sum=n1+n3+n5+n7+n9+n11;

        n13=9-((((first_sum*3)+second_sum)-1)%10);

        printf("Check digit: %d", n13);


        return 0;
}
