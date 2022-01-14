#include <stdio.h>

int main() {

    int average[6];
    average[0] = 5;
    average[1] = 6;
    average[2] = 7;
    average[3] = 8;
    average[4] = 9;
    average[5] = (average[0] + average[1] + average[2] + average[3] + average[4]) / 5;

    printf("The average of the five numbers is %d", average[5]);

    return 0;
}
