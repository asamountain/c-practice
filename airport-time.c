/*
 * =====================================================================================
 *
 *       Filename:  airport-time.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 11일 13시 43분 58초
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

        int current_h, current_mins, departure_h,departure_m, arrival_h, arrival_m;

        printf("Enter a 24-hour time :");
        scanf("%2d:%2d", &current_h, &current_mins);

        printf("Depareture time\t\tArrival time\n");
        switch(current_h){
                case 8:
                        departure_h=8;
                        departure_m=0;
                        arrival_h=10;
                        arrival_m=16;
                        break;
                case 9:
                        departure_h=9;
                        departure_m=43;
                        arrival_h=11;
                        arrival_m=52;
                        break;
                case 10:
                        if(current_mins>(43+19)){
                                departure_h=11;
                                departure_m=19;
                                arrival_h=1;
                                arrival_m=31;
                        }else if(current_mins<(43+19)){
                                departure_h=9;
                                departure_m=43;
                                arrival_h=11;
                                arrival_m=52;
                        }
                        break;
                case 11:
                                departure_h=11;
                                departure_m=19;
                                arrival_h=13;
                                arrival_m=31;
                                break;
                case 13:
                                departure_h=12;
                                departure_m=47;
                                arrival_h=15;
                                arrival_m=0;
                                break;
                case 14: 

                                departure_h=14;
                                departure_m=0;
                                arrival_h=16;
                                arrival_m=8;
                                break;
                case 15:
                                departure_h=15;
                                departure_m=45;
                                arrival_h=17;
                                arrival_m=55;
                                break;
                case 16 :
                                departure_h=19;
                                departure_m=0;
                                arrival_h=21;
                                arrival_m=20;
                                break;


        }


        printf("Closest departure time is %2d:%2d p.m., arriving at %2d:%2d p.m.", departure_h, departure_m, arrival_h, arrival_m);
        return 0;
}

