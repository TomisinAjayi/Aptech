#include<stdio.h>

int main() {

    /*for(int i = 0; i < 1000; i++) {
        printf("%d.Tomi.\n", i + 1);
    }*/
    /*for(int i = 1; i <=50; i++) {
        printf("%dx%d=%d\n\n", 20, i, 20*i);
    }*/

    int factorial;
    printf("enter a number: ");
    scanf("%d", &factorial);
    int times = 1;
    // for loop
    for(int i = 1; i <= factorial; i++) {
        times = times * i;
    }
    //while loop
    /*int i = 1;
    while(i <= factorial) {
        times = times * i;
        i++;
    }*/
    printf("The factorial of %d! is %d", factorial, times);

    return 0;
}
