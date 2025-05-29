/*
 * =====================================================================================
 *
 *       Filename:  scanf-int-float-seq.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 08일 12시 10분 53초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

// Practice: Reading mixed integer and float input in sequence.
// Concepts: Mixed input, scanf formatting, output formatting.

#include <stdio.h>

int main(){

        int i,j;
        float x;

        printf("d f d : ");
        scanf("%d%f%d",&i,&x,&j);
        printf("%d %f %d\n",i,x,j);
        return 0;
}

