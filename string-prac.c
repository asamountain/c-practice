#include <stdio.h>
#include <string.h>

// Practice: Basic string handling and comparison in C.
// Concepts: Character arrays, string functions (strlen, strncmp), if-else logic.

int main(){

        //char * name ="John Smith";
        char name[11] = "John Smith";
        printf("%s\n",name);
        printf("%ld\n",strlen(name));

        if(strncmp(name, "John", 4)==0){
                printf("Hello John!\n");
        }else{
                printf("You are not John. Get away from me!");
        }

        return 0;
}


// curiosity,
// why not
// char name = "John Smith"; ?
// 
// instead, they use 
//
// char * name = "John Smith"; ?
//
//
