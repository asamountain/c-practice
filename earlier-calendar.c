/*
 * =====================================================================================
 *
 *       Filename:  earlier-calendar.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 11일 15시 44분 13초
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

        int f_m,f_d,f_y,s_m,s_d,s_y;
        printf("Enter first day (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &f_m, &f_d, &f_y);
        printf("Enter second day (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &s_m, &s_d, &s_y);


        int f_days= (f_y*365)+(f_m*12)+f_d;
        int s_days= (s_y*365)+(s_m*12)+s_d;

        printf("f_days(%d) vs s_days (%d) ", f_days, s_days);

        if(f_days<s_days){
        printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d",  f_m, f_d, f_y,s_m, s_d, s_y );
        }else{
        printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d",  s_m, s_d, s_y, f_m, f_d, f_y);
        }


        return 0;
}
