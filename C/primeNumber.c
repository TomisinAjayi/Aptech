#include<stdio.h>

int main() {

    int number;
    int i;
    int condition = 1;

    printf("Enter any number: ");
    scanf("%d", &number);

    for(i = 2; i < number; i++) {
        if((number % i) == 0) {
            condition = 0;
        }
    }

    if(number == 0 || number == 1) {
        printf("0 or 1 aren't prime numbers.");
    } else {
        if(condition == 1) {
            printf("%d is a prime number.", number);
        } else{
            printf("%d isn't a prime number", number);
        }
    }

    return 0;
}
