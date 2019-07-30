#include <stdio.h>
#include<stdlib.h>
#define true 0
#define false 1
int main(int argc ,char* argv[argc+1])
{
    puts("Gentleman Put");
    if(argc > 1){
        while(true){
            puts("Again Gentleman Puts");
        }
    }else{
        do{
            puts("Adding Functions in C");
            #define false 0
        }while(false);
    }
    printf("Hello World!\n");
    return EXIT_SUCCESS;
}
