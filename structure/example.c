#include <stdio.h>

// Practice: Using structures to store and print data.
// Concepts: Struct definition, struct variable, member access, pointers to struct members.

struct telephone{

        char *name;
        int number;
};

int main(){


        struct telephone index;
        index.name = "SJ";
        index.number = 01024153411;
        printf("name: %s\n", index.name);
        printf("number: %d\n", index.number);
        printf("address of struct.name : %p\n", &index.name);
        printf("address of struct.number : %p\n", &index.number);
}
