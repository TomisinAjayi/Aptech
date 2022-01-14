#include<stdio.h>

int main() {
    int first_number;
    int second_number;
    int sum;

    printf("Program to calculate sum of two numbers\n");
    printf("enter the first number ");
    scanf("%d", &first_number);
    printf("enter the second number ");
    scanf("%d", &second_number);
    sum = first_number + second_number;
    printf("the sum of two numbers is %dm", sum);

    return 0;
}
