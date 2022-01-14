#include<stdio.h>

int main() {

    int a;
    int b;

    /*printf("enter a number: \n");
    scanf("%d", &a);
    printf("enter another number: \n");
    scanf("%d", &b);
*/
   /* if(a == 2) {
        if(b == 1) {
            printf("1 and 2");
        } else {
            printf("you didn't input 1");
        }
    } else if(a == 4) {
        printf("number is 4");
    } else if(a > 4) {
        printf("greater than 4");
    } else {
        printf("random");
    }*/


    /*switch(a) {
        case 2:
            printf("number is 2");
        break;
        default:
            printf("number isn't 2");
        break;
    }*/

    char ch;
    printf("Determine if the letter entered is a vowel or consonant: ");
    scanf("%c", &ch);


        switch(ch) {
        case 'a' :
        case 'A' :
        case 'e' :
        case 'E' :
        case 'i' :
        case 'I' :
        case 'o' :
        case 'O' :
        case 'u' :
        case 'U' :
            printf("The letter %c is a vowel", ch);
            break;
        default :
            printf("The letter %c is a consonant", ch);
            break;
        }



    return 0;
}
