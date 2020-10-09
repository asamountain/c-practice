/*
 * =====================================================================================
 *
 *       Filename:  octal-out.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 09일 18시 16분 40초
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

        int i,first,tenth,hundreds,thousands,ten_thousands;
        printf("Enter a number between 0 and 32767: ");
        scanf("%5d",&i);
        ten_thousands = i/8/8/8/8%8;
        thousands = i/8/8/8%8;
        hundreds = i/8/8%8;
        tenth = i/8%8;
        first = i%8;
        printf("In octal, Your number is: %d%d%d%d%d", ten_thousands, thousands, hundreds, tenth, first );



        return 0;
}
