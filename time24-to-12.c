/*
 * =====================================================================================
 *
 *       Filename:  time24-to-12.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 11일 10시 04분 47초
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
        int hour, mins;
        printf("Enter a 24-hour time: ");

        scanf("%2d:%2d", &hour,&mins);

        if(hour<=12){
                printf("%2d:%2d AM", hour,mins);
        }else if(hour>12){
                printf("%2d:%2d PM", 24-hour,mins);
        }


        return 0;

}
