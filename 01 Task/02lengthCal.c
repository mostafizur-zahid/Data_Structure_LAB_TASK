#include <stdio.h>

// Function to calculate the length of a string using a pointer
int stringLength(const char *str) {
    int length = 0;

    // Loop through the characters of the string until '\0' is encountered
    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int main() {
    char inputString[100];

    // Input the string
    printf("Input a string : ");
    gets(inputString);

    // Calculate the length of the string using the stringLength function
    int length = stringLength(inputString);

    // Display the result
    printf("The length of the given string \"%s\" is %d\n", inputString, length);

    return 0;
}
