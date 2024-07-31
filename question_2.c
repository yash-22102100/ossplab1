#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

// Function to reverse the string
void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    // Swap characters from start to end until the middle is reached
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[MAX_LENGTH];

    printf("Enter a string: ");
    // Read a string from the user
    fgets(str, MAX_LENGTH, stdin);

    // Remove the newline character if it was read
    str[strcspn(str, "\n")] = '\0';

    // Reverse the string
    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
