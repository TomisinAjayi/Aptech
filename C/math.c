#include<stdio.h>
#include<math.h>

int main() {

    float a, b, c, v, sd;
    float sum;
    float mean;

    printf("Calculate the standard deviation of any 3 numbers.\n");
    printf("Enter 1st number: ");
    scanf("%f", &a);
    printf("Enter 2nd number: ");
    scanf("%f", &b);
    printf("Enter 3rd number: ");
    scanf("%f", &c);
    sum = a+b+c;
    mean = sum / 3;

    v = ((a - mean)*(a - mean)) + ((b - mean)*(b - mean)) + ((c - mean)*(c - mean));
    sd = sqrt(v / 3);

    printf("The standard deviation of the 3 numbers is %f.", sd);

    return 0;
}
