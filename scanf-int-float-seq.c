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

#include <stdio.h>

int main(){

        int i,j;
        float x;

        printf("d f d : ");
        scanf("%d%f%d",&i,&x,&j);
        printf("%d %f %d\n",i,x,j);
        return 0;
}

