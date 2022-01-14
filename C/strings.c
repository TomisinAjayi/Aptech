#include<stdio.h>

int main() {

    /*char tomi[10];
    gets(tomi);
    puts(tomi);*/

    char choice[2];
    puts("Welcome to Glo's Customer service.\nHow may we help you?");
    puts("Press a for English.");
    puts("Press b for Yoruba.");
    puts("Press c for Pidgin.");
    puts("Press * to cancel.");
    gets(choice);
//puts(choice);
    if(strcmp(choice, "a") == 0) {
        puts("This is english.");

    } else if(strcmp(choice, "b") == 0) {
        puts("This is Yoruba");
    } else if(strcmp(choice, "c") == 0) {
        puts("This is pidgin");
    } else if(strcmp(choice, "*") == 0) {
        puts("Thank you.");
        exit(0);
    } else {
        puts("Invalid choice!");
    }

    /*
    strcpy(s1, s2) : copy s2 into s1;
    strcat(s1, s2) : joins s2 to end of s1;
    strlen(s1) : return length of s1;
    strcmp(s1, s2) : compares s1 and s2, return 0 if same, less than o if s1<s2 and greater than 0 if s1>s2;
    strchr(s1, ch) : returns a pointer to first occurence of ch in s1;
    strstr(s1, s2) : returns a pointer to first occurence of s1 in s1;
    */

    return 0;
}
