#include<stdio.h>

int main() {

    int num[10];
    int i, high;

    printf("Find the highest number from the numbers inputed(only 10 numbers allowed)");
    for(i = 0; i < 10; i++) {
        printf("\nEnter value: %d : ", i + 1);
        scanf("%d", &num[i]);
    }

    high = num[0];
    for(i = 1; i < 10; i++) {
        if(num[i] > high) {
            high = num[i];
        }
    }
    printf("\nHighest value entered was %d", high);

    return 0;
}
