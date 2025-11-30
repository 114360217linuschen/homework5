#include <stdio.h>

void stringReverse(char str[])
{
    if (*str == '\0')
        return;

    stringReverse(str + 1);
    printf("%c", *str);
}

int main()
{
    char s[] = "Hello";

    printf("Reverse: ");
    stringReverse(s);
    printf("\n");

    return 0;
}
