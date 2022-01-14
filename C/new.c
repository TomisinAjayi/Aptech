#include<stdio.h>

int main() {

    int first_number, second_number;
    int a, b;
    int lcm, hcf;

    printf("Calculate the HCF and LCM of 2 numbers.\n");
    printf("Enter first number: ");
    scanf("%d", &first_number);
    printf("Enter second number: ");
    scanf("%d", &second_number);

    a = first_number;
    b = second_number;

    while(b != 0) {
        b = a % b;
    }

    hcf = b;
    lcm = (first_number * second_number) / hcf;

    printf("The Highest Common Factor of the 2 numbers is %d.\n", hcf);
    printf("The lowest Common Multiple of the 2 numbers is %d.", lcm);

    return 0;
}
