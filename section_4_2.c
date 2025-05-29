// Practice: Exploring floating-point division, negation, and boolean logic in C.
// Concepts: Floating-point arithmetic, boolean expressions, printf formatting.

#include <stdio.h>
#include <stdbool.h>

int main(){

        float i,j;

        j=0;
        for(i=1;i>0;i++){
        j++;   
        printf("%f,%f", i,j);
        printf("%f", (-i)/j);
        printf("%f", -(i/j));
        printf("%s\n", (-i)/j==-(i/j)? "true":"false");
}
        return 0;
}
