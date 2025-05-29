#include <stdio.h>

// Practice: Reversing the digits of a three-digit number.
// Concepts: Integer input, arithmetic operations, digit extraction, output formatting.

int main(){

        int i, hundreds, tenth, first;


        printf("Enter a three-digit number: ");
        scanf("%d[100-999]", &i);
        first = i%100%10;
        tenth = i%100/10;
        hundreds = i/100;
                
        printf("The reversal is: %d%d%d", first, tenth, hundreds);

        return 0;
}

