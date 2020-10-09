/*
 * =====================================================================================
 *
 *       Filename:  section_4_10.c
 *
 *    Description:  within terminal works well. but not in nvim terminal.
 *
 *        Created:  2020년 10월 09일 15시 48분 10초
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(){


        int i,j;
        i=2; j=8;
        j = (i=6) + (j=3);
        printf("%d %d", i, j);


        return 0;
}

