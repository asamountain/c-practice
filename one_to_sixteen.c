/*
 * =====================================================================================
 *
 *       Filename:  one_to_sixteen.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 08일 19시 02분 47초
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

        int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16;
        printf("Enter the numbers from 1 to 16 in any order: ");
        scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

        printf("%-3d %-3d %-3d %-3d\n", n1, n2, n3, n4);
        printf("%-3d %-3d %-3d %-3d\n", n5, n6, n7, n8);
        printf("%-3d %-3d %-3d %-3d\n", n9, n10, n11, n12);
        printf("%-3d %-3d %-3d %-3d\n", n13, n14, n15, n16);

        printf("Row sums: %d %d %d %d\n", (n1+n2+n3+n4), (n5+n6+n7+n8), (n9+n10+n11+n12),(n13+n14+n15+n16));
        printf("Column sums: %d %d %d %d\n", (n1+n5+n9+n13), (n2+n6+n10+n14), (n3+n7+n11+n15), (n4+n8+n12+n16));
        printf("Diagonal sums: %d %d", (n1+n6+n11+n16),(n4+n7+n10+n13));
        return 0;
}

