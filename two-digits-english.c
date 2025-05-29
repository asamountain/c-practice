/*
 * =====================================================================================
 *
 *       Filename:  two-digits-english.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 11일 17시 07분 38초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

// Practice: Mapping two-digit numbers to their English word representation.
// Concepts: Integer input, arrays, switch-case, string formatting, conditional logic.

#include <stdio.h>


int main(){

        int n10,n1;
        printf("Enter a two-digit number: ");
        scanf("%1d%1d", &n10,&n1);

        printf("n10: %d,n1 :%d\n", n10,n1);

        char *tenth[10];
        char *first[10];

        if(n10==1){ switch(n1){ 
                case 1: printf("You entered eleven"); break;
                case 2: printf("You entered twelven"); break;
                case 3: printf("You entered thirteen"); break;
                case 4: printf("You entered forteen"); break;
                case 5: printf("You entered fifteen"); break;
                case 6: printf("You entered sixteen"); break;
                case 7: printf("You entered seventeen"); break;
                case 8: printf("You entered eighteen"); break;
                case 9: printf("You entered nineteen"); break;
        };}

        if(n10!=1){
                switch(n1){
                case 1: first[10]="one";break;
                case 2: first[10]="two";break;
                case 3: first[10]="three";break;
                case 4: first[10]="four";break;
                case 5: first[10]="five";break;
                case 6: first[10]="six";break;
                case 7: first[10]="seven";break;
                case 8: first[10]="eight";break;
                case 9: first[10]="nine";break;
                case 0: first[10]="";break;
                }
                switch(n10){
                case 2: tenth[10]="twenty"; break;
                case 3: tenth[10]="thirty";break;
                case 4: tenth[10]="forty";break;
                case 5: tenth[10]="fifty";break;
                case 6: tenth[10]="sixty";break;
                case 7: tenth[10]="seventy";break;
                case 8: tenth[10]="eighty";break;
                case 9: tenth[10]="ninety";break;
        }
        printf("You entered the number %s-%s",tenth[10],first[10]);
       } 
        

        return 0;
}

