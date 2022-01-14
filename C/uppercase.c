#include<stdio.h>

int main() {

    char word[100];
    printf("Enter a word / sentence to change to uppercase: ");
    scanf("%s", &word);

    for(int i = 0; i <= word[i]; i++) {
        char uppercase = word[i];
        putchar(toupper(uppercase));
    }

    return 0;
}
