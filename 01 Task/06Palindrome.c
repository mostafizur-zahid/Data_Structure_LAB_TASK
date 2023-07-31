#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(const char *str, int start, int end) {
    // Base case: If start and end cross each other, it's a palindrome
    if (start >= end) {
        return true;
    }

    // If the characters at the start and end positions are not the same, it's not a palindrome
    if (str[start] != str[end]) {
        return false;
    }

    // Recursive step: Check the next characters
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    bool result = isPalindrome(str, 0, length - 1);

    if (result) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}