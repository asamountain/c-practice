/*
 * =====================================================================================
 *
 *       Filename:  biggest-smallest-number.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 11일 10시 48분 59초
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
        int n1,n2,n3,n4,largest,smallest;
        printf("Enter four integers: ");
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
        printf("Entered: %d %d %d %d\n", n1, n2, n3, n4);
/* largest check */
        
        if((n1>n2) && (n3>n4) && (n1>n3) && (n2>n4)){
                printf("l:s = n1:n4 \n");
                largest=n1;
                smallest=n4;
        }else if((n2>n3) && (n4>n1) && (n2>n4) && (n3>n1)){
                printf("l:s = n2:n1 \n");
                largest=n2;
                smallest=n1;
        }else if((n3>n4) && (n1>n2) && (n3>n1) && (n4>n2)){
                printf("l:s = n3:n2 \n");
                largest=n3;
                smallest=n2;
        }else if((n4>n1) && (n2>n3) && (n4>n2) && (n1>n3)){
                printf("l:s = n4:n3 \n");
                largest=n4;
                smallest=n3;
        }
        
        printf("Largest: %d\n", largest);
        printf("Smallest: %d", smallest);
        return 0;
}
