#include<stdio.h>
int main() {

    int numberToCheck;
    printf("\t\tProgram to check if a number is odd or even.\n\n");
    printf("Enter any number to check: ");
    scanf("%d", &numberToCheck);

    if((numberToCheck % 2) == 0) {
        printf("The number %d is an even number", numberToCheck);
    } else if((numberToCheck % 2) != 0) {
        printf("The number %d is an odd number", numberToCheck);
    }

    return 0;
}
