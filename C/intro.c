#include<stdio.h>
#include<math.h>

/*
    START
    DISPLAY “ a, b, c
    D = b^2 - 4ac
       D < 0

    ELSE IF D == 0

          X1 = -b/(2a)
    ELSE IF  D > 0

    X1 = (-b+sqrt(D))/2a)
    X2 =(-b-sqrt(D))/2a)
    END IF
    OUTPUT: X1 ,X2
    STOP
*/
int main() {

    int a, b, c, d, x;

    printf("how to calculate a quadratic equation.\n");
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    printf("enter c");
    scanf("%d", &c);

    d = b*b - 4*a*c;

    int myroot = sqrt(d);

    if(a | b | c >= 0) {
        x = (-1*b + myroot) / 2;
    } else {
        x = (-1*b - myroot) / 2;
    }

    printf("the sum of the quadratic equation is %d", x);
    return 0;
}
