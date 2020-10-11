/*
 * =====================================================================================
 *
 *       Filename:  score-if.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 10일 19시 11분 00초
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
        int score;
        score=90;
        if(score<60){
                printf("F");
        } else if(score<70){
                        printf("D");
                }
                else if(score<80){
                        printf("C");
                }
                else if(score<90){
                        printf("B");
                }
                else{
                        printf("A");
                }
        
        return 0; } 
