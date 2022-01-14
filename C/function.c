#include<stdio.h>

// without arguments

/*int sumtwo() {

    //int a = 5;
    //int b = 8;
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int sum = a + b;
    printf("Sum of a and b is %d", sum);

    return sum;
}*/

//using arguments
int sumtwo(int a, int b) {

    int sum = a + b;
    return sum;
}
int main() {
    //sumtwo();
    printf("sum of a and b is %d", sumtwo(4, 6));
    return 0;
}
