/*
 * =====================================================================================
 *
 *       Filename:  section_4_3_11.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 09일 16시 06분 05초
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
        i=10; j=5;
        printf("%d ", i++ - ++j);
        printf("%d %d", i, j);

        return 0;
}
