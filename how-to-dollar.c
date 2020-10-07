/*
 * =====================================================================================
 *
 *       Filename:  how-to-dollar.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 07일 16시 15분 07초
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

        int *target_dollars;
        int temp;
        temp=15;
        printf("Enter dollar : %d \n", temp);
        /*  scanf("%d", &target_dollars); */;
        target_dollars=&temp;
       

        if(*target_dollars>=20){
                printf("$20 bills: %d \n", *target_dollars/20);

                if((*target_dollars % 20) >=10){ 
                      printf("$10 bills: %d \n", (*target_dollars%20)/10);
                    

                      if((*target_dollars % 20)%10>=5){
                             printf("$5 bills : %d \n", (*target_dollars%20)%10/5);
                             if(((*target_dollars % 20)%10)%5 >=1){
                                     printf("$1 bills : %d \n", (*target_dollars%20%10%5)/1);
                             }
                      }
                     else if((*target_dollars % 20)%10<5){
                             printf("$1 bills : %d \n", (*target_dollars%20%10%5)/1);

                     }
                }
        }else if(*target_dollars < 20){ 
                printf("$10 bills: %d \n", (*target_dollars%20)/10);

                      if((*target_dollars % 20)%10>=5){
                             printf("$5 bills : %d \n", (*target_dollars%20)%10/5);
                             if(((*target_dollars % 20)%10)%5 >=1){
                                     printf("$1 bills : %d \n", (*target_dollars%20%10%5)/1);
                             }
                      }
                     else if((*target_dollars % 20)%10<5){
                             printf("$1 bills : %d \n", (*target_dollars%20%10%5)/1);

                     }
                }

                return 0;

        }

