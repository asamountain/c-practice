#include <stdio.h>

int main(){

        int i,j,k;
        i=2; j=3;
        k= i*j ==6;
        printf("%d",k );

        /*  why the result is 1?
         *  1 means 'True' in Equality operators.
         *  0 means 'False'. 
         *  this program results 1, so it means
         *  (i*j) is equal with k's value which is 6 int.
         *
         *  need to unforget 1 is true, 0 is false.
         *  but usually 0 means good? Isn't it?
         *  so it seems a bit tricky..?
         *  In my memory, Error value returns 1 in terminal.
         *  yes, in shell the error code is 1.
         *  but here, 0 is false! 
         *  
         *  shell - C code's equality operators return oppositely.
         *  I need to make sure about this.
         *
         *  C language == results 0, 1. 
         *  0 means false, 1 means true.
         *
         *  In shell program, usually 0 means success in execute result,
         *  1 means general error.*/
        

        return 0;
}

