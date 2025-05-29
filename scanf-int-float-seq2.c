/*
 * =====================================================================================
 *
 *       Filename:  scanf-int-float-seq2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 08일 12시 26분 06초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

// Practice: Reading mixed float and integer input in sequence (variation).
// Concepts: Mixed input, scanf formatting, output formatting.

#include <stdio.h>

int main(){

        int i;
        float x,y;
        scanf("%f%d%f", &x, &i, &y);
        printf("%3.1f %d %f",x, i, y);
        return 0;
}

