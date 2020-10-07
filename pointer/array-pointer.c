/*
 * =====================================================================================
 *
 *       Filename:  array-pointer.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 09월 09일 14시 50분 48초
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

        char array[10];

        char *ptr_toarray=&array[0];

        printf("%p \n", array);
        printf("%p \n", ptr_toarray);
        printf("%d \n", *(ptr_toarray+2) );
        printf("%p \n", array+0);
        printf("%p \n", array+1);
        printf("%p \n", array+2);

}
