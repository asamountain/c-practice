/*
 * =====================================================================================
 *
 *       Filename:  loan.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 07일 18시 28분 08초
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

        int loan ;
        float yearly_interest_rate;
        int monthly_payment;

     printf("Enter amount of loan : \n");
      scanf("%d", &loan); 
        printf("Enter yearly interest rate : \n");
         scanf("%f", &yearly_interest_rate); 
        printf("Enter monthly payment : \n");
      scanf("%d", &monthly_payment); 



        float monthly_interest_rate = yearly_interest_rate / 12;

        printf("loan: %d \nyearly interest rate: %.2f \nmonthly payment: %d \nmonthly interest rate: %.2f \n", loan, yearly_interest_rate, monthly_payment, monthly_interest_rate);

        float first = (loan-monthly_payment)+((loan-monthly_payment)*(monthly_interest_rate/100));
        float second = (first-monthly_payment)+((first-monthly_payment)*(monthly_interest_rate/100));
        float third = (second-monthly_payment)+((second-monthly_payment)*(monthly_interest_rate/100));


        printf("\nBalance remaining after first payment: %.2f \n", first);
        printf("Balance remaining after second payment: %.2f \n", second);
        printf("Balance remaining after third payment: %.2f \n", third);



        return 0;

}
