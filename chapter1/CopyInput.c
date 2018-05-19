// This program reads character from stdin and prints the same character to stdout.
#include <stdio.h>

int main(void){
    
    int c;
    
    c = getchar();
    
    while (c != EOF){
        putchar(c);
        c = getchar();
    }

    return 0;
}
