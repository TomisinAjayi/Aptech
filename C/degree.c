#include<stdio.h>

int main() {

    int degree;
    int fahrenheit = 0;
    printf("Convert celsius degree to fahrenheit.\n");
    printf("Enter the celsius degree: ");
    scanf("%d", &degree);
    fahrenheit = 32 + ((9 * degree) / 5);
    printf("The celsius degree converted to fahrenheit is %d", fahrenheit);

    return 0;
}
