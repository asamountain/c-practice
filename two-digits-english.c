/*
 * =====================================================================================
 *
 *       Filename:  two-digits-english.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2020년 10월 11일 17시 07분 38초
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

        int n1,n2;
        printf("Enter a two-digit number: ");
        scanf("%1d%1d", &n1,&n2);

        printf("n1: %d,n2 :%d\n ", n1,n2);

        char *tenth[10];
        char *first[10];
        switch(n1){
                case 1: 
                        switch(n2){
                                case 1: 
                                        printf("n1 1 arrived!\n");
                                        tenth[10]="elev"; break;
                                case 2: tenth[10]="twelv"; break;
                                case 3: tenth[10]="thirte"; break;
                                case 4: tenth[10]="forte"; break;
                                case 5: tenth[10]="fifte"; break;
                                case 6: tenth[10]="sixte"; break;
                                case 7: tenth[10]="sevente"; break;
                                case 8: tenth[10]="eighte"; break;
                                case 9: tenth[10]="ninete"; break;
                        };
                        break;
                case 2: tenth[10]="twenty"; break;
                case 3: tenth[10]="thirty";break;
                case 4: tenth[10]="forty";break;
                case 5: tenth[10]="fifty";break;
                case 6: tenth[10]="sixty";break;
                case 7: tenth[10]="seventy";break;
                case 8: tenth[10]="eighty";break;
                case 9: tenth[10]="ninety";break;
        }
        if(n1!=1){
                switch(n2){
                case 1: first[10]="one";break;
                case 2: first[10]="two";break;
                case 3: first[10]="three";break;
                case 4: first[10]="four";break;
                case 5: first[10]="five";break;
                case 6: first[10]="six";break;
                case 7: first[10]="seven";break;
                case 8: first[10]="eight";break;
                case 9: first[10]="nine";break;
                case 0: first[10]="";break;
                }
        }else if(n1==1){
        
                first[10]="en";
        }

         printf("You entered the number %s-%s",tenth[10],first[10]);

        return 0;
}

