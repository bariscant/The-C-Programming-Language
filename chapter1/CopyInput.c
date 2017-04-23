// This program reads character from stdin and prints the same character to stdout.

#include <stdio.h>

main()
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}
