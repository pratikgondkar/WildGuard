#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Take input from user

    reverseString(str);  // Reverse the string
    printf("Reversed string: %s\n", str);  // Output the reversed string

    return 0;
}
