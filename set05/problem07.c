/*#include <stdio.h>
#include <string.h>
#include <ctype.h>

void input(char *name) {
    printf("Enter the name of the camel: ");
    scanf("%s", name);
}

int has_nice_name(char *name) {
    int vowel_count = 0;
    int consonant_count = 0;

    for (int i = 0; i < strlen(name); i++) {
        char c = tolower(name[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowel_count++;
        } else {
            consonant_count++;
        }
    }

    return (vowel_count >= 2 && consonant_count >= 2);
}

void output(int res) {
    if (res) {
        printf("The camel has a nice name!\n");
    } else {
        printf("The camel does not have a nice name.\n");
    }
}

int main() {
    char name[50];
    input(name);
    int res = has_nice_name(name);
    output(res);
    return 0;
}
*/

#include <stdio.h>
#include <string.h>

void input(char *name) {
    printf("Enter the name of the camel: ");
    scanf("%s", name);
}

int has_nice_name(char *name) {
    int vowel_count = 0;
    int consonant_count = 0;
    int len = strlen(name);

    for (int i = 0; i < len; i++) {
        char c = name[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowel_count++;
        } else {
            consonant_count++;
        }
    }

    return vowel_count >= 2 && consonant_count >= 2;
}

void output(int res) {
    if (res) {
        printf("The name of the camel is nice!\n");
    } else {
        printf("The name of the camel is not nice.\n");
    }
}

int main() {
    char name[100];
    input(name);
    int res = has_nice_name(name);
    output(res);
    return 0;
}
