#include<stdio.h>
#include <ctype.h>

int main() {

    char name[8] = "tomisin";

    printf("%s is a woman", name);
    printf("\t\tThe number 555 in various forms: \n");
    printf("Without any modifier: \n");
    printf("[%d]\n", 555);
    printf("With - as modifier: \n");
    printf("[%-d]\n", 555);
    printf("With digit string 10 as modifier: \n");
    printf("[%10d]\n", 555);
    printf("With 0 as modifier: \n");
    printf("[%0d]\n", 555);
    printf("With 0 and digit string 10 as modifier: \n");
    printf("[%010d]\n", 555);
    printf("With - , 0 and digit string 10 as modifier: \n");
    printf("[%-010d]\n", 555);

    /*char tomi = getchar();
    putchar(tomi);
    return 0;*/

    //char word[100] = "tomi";

    //printf("Enter a word / sentence: ");
    //scanf("%s", &word);

    //printf("%s in upper case" , toupper(word));

   /* char ch;
    ch = 'a';

    printf("%c in uppercase" , toupper(ch));*/

    return 0;

}
