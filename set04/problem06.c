#include <stdio.h>
#include <string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main() {
    char string[100];
    input_string(string);
    int no_words = count_words(string);
    output(string, no_words);
    return 0;
}

// Function to input a string
void input_string(char *a) {
    printf("Enter a string: ");
    fgets(a, 100, stdin);
    if (a[strlen(a) - 1] == '\n') {
        a[strlen(a) - 1] = '\0'; // Removing the newline character
    }
}

// Function to count the number of words in a string
int count_words(char *string) {
    int count = 0;
    char *token = strtok(string, " "); // Tokenizing the string using space as delimiter
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }
    return count;
}

// Function to output the string and the number of words in it
void output(char *string, int no_words) {
    printf("          %s\n", string);
    printf("The number of words in the string is: %d\n", no_words);
}
