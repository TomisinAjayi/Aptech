#include<stdio.h>

int main() {

    int i;
    int n;
    float num[100];
    float sum = 0.0;
    float average;

    printf("Calculate the average of the numbers.\n");
    printf("Enter the total number: ");
    scanf("%d", &n);

    //should be the opposite instead
    while( n <= 1 || n >= 100) {
        printf("ERROR! enter a number from 1 - 100\n");
        printf("Enter the total number: ");
        scanf("%d", &n);
    }
    for(i = 0;i < n; i++) {
            printf("%d. Enter number: ", i + 1);
            scanf("%f", &num[i]);
            sum += num[i];
    }
    average = sum / n;
    printf("Average is %f", average);

    return 0;
}



