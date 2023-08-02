#include <stdio.h>

int stringLength(const char *str)
{
    int length = 0;

    while (*str != '\0')
    {
        length++;
        str++;
    }

    return length;
}

int main()
{
    char inputString[100];

    printf("Input a string : ");
    gets(inputString);

    int length = stringLength(inputString);

    printf("The length of the given string \"%s\" is %d\n", inputString, length);

    return 0;
}
