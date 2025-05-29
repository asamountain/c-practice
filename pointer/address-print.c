#include <stdio.h>
#include <stdbool.h>

// Practice: Assigning and dereferencing pointers.
// Concepts: Pointers, address-of operator, dereferencing, value comparison.

int main(){


        int x,y;
        int *ptr_p;

        x = 5;
        ptr_p = &x;
        y = *ptr_p;
        printf("%d\n", y);
       
        if(x==y){
        printf("True\n");
        }else{
        printf("False\n");
        }


return 0;

}
