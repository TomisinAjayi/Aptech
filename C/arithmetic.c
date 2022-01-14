#include<stdio.h>
#include<math.h>

int main() {

    int x, y;
    x = 5;
    y = 2;
    printf("The integers are: %d & %d\n", x, y);
    printf("The addition is: %d\n", x + y);
    printf("The subtraction is: %d\n", x - y);
    printf("The multiplication is: %d\n", x * y);
    printf("The division is: %d\n", x / y);
    printf("The modulus is: %d\n", x % y);
    printf("The power is: %d\n", pow(x, y));

    int a  = -5;
    int b = -a;
    printf("%d", b);

    return 0;
}
