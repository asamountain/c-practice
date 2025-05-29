/*
 * =====================================================================================
 *
 *       Filename:  tel_area_code.c
 *
 *    Description:  
 *
 *
 *        Version:  1.0
 *        Created:  2020년 10월 11일 09시 05분 35초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
// Practice: Mapping telephone area codes to city names using switch-case.
// Concepts: Integer input, switch-case, output formatting.
#include <stdio.h>
int main(){
        int input_area_code;
        printf("Enter an area code : ");
        scanf("%3d", &input_area_code);

        switch(input_area_code){
                case 229: printf("Albany"); break;
                case 404: printf("Atlanta"); break;
                case 470: printf("Atlanta"); break;
                case 478: printf("Macon"); break;
                case 678: printf("Atlanta"); break; 
                case 706: printf("Columbus"); break;
                case 762: printf("Columbus"); break;
                case 770: printf("Atlanta"); break;
                case 912: printf("Savannah"); break;
        }
        return 0;
}

