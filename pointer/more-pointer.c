// Practice: Swapping two integers using pointers.
// Concepts: Pointers, function arguments, dereferencing, address-of operator.
#include<stdio.h>

void swapping(int * ptr_c, int * ptr_d){
        int tmp;
        tmp = *ptr_c;
        *ptr_c=*ptr_d;
        *ptr_d=tmp;
        printf("in function : %d %d\n", *ptr_c,*ptr_d);
}

int main(){
        int a, b;

        a=5;
        b=10;
        printf("input: %d %d\n", a,b);
        swapping(&a,&b);
        printf("output :%d %d\n", a,b);
        return 0;

        
}
