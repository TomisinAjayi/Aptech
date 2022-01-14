#include<stdio.h>

/*int sum() {

    int a, b, c, d;
    printf("Sum of 4 numbers.\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    printf("Enter fourth number: ");
    scanf("%d", &d);
    int sum = a + b + c + d;
    printf("Sum of 4 numbers is %d", sum);

    return sum;
}*/

int add(int a, int b, int c, int d) {

    int sum = a + b + c + d;
    return sum;
}

int main() {

    //sum();
    int a, b, c, d;
    printf("\t\tSum of 4 numbers.\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    printf("Enter fourth number: ");
    scanf("%d", &d);

    printf("Sum of 4 numbers is %d", add(a, b, c, d));

    return 0;
}
