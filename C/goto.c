#include<stdio.h>


int main() {

    // goto
    int num;
    label1:
        printf("\nEnter a number (1) :");
        scanf("%d", &num);
        if(num == 1) {
            goto Test;
        } else {
            goto label1;
        }
    Test:
        printf("All done...\n");

    // continue
    for(num = 1; num <=100; num++) {
        if(num % 9 == 0) continue;
        printf("%d\t", num);
    }

    return 0;
}
