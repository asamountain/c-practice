/*
 * =====================================================================================
 *
 *       Filename:  random.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 10일 19시 27분 41초
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
        int i;
        i=1;
        printf("%i", i%3);
        switch( i % 3){
                case 0: printf("zero");
                        break;
                case 1 : printf("one");
                         break;
                case 2: printf("two");
                        break;
                default : printf("%d", i%3);
        }
        return 0;


}

