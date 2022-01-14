#include<stdio.h>

int main() {

    int n;
    int r;
    int multiply = 1;
    int combine = 1;
    int times = 1;
    int permutation;
    int combination;

    printf("\t\tCalculate the permutation and combination.\n");
    printf("Enter the number it can be selected from?(n): ");
    scanf("%d", &n);
    printf("Enter the number of ways it can be arranged?(r): ");
    scanf("%d", &r);

    //calculate n!
    for(int i = 1; i <= n; i++) {
        multiply = multiply * i;
    }
    //calculate (n-r)!
    for(int a = 1; a <= (n-r); a++) {
        combine = combine * a;
    }
    //calculate r!
    for(int j = 1; j <= r; j++) {
        times = times * j;
    }

    permutation = multiply / combine;

    combination = multiply / (times * combine);

    printf("The permutation of %d ways arranged in %d is %d\n", n, r, permutation);
    printf("The combination of %d ways that can be selected from %d is %d", n, r, combination);

    return 0;
}
