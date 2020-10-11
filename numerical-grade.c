/*
 * =====================================================================================
 *
 *       Filename:  numerical-grade.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 11일 16시 36분 57초
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
        int i_grade;
        int tenth_num ;

        printf("Enter numerical grade: ");
        scanf("%d", &i_grade);

        tenth_num = i_grade/10;

        switch(tenth_num){
                case 9:
                        printf("A");
                        break;
                case 8: 
                        printf("B");
                        break;
                case 7: 
                        printf("C");
                        break;
                case 6: 
                        printf("D");
                        break;
                default:
                        printf("F");
                        break;
        }
        
        return 0;
}

