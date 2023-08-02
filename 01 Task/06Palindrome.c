#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(const char *str, int start, int end) {
   
    if (start >= end) {
        return true;
    }

    
    if (str[start] != str[end]) {
        return false;
    }

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