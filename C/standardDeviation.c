#include<stdio.h>
#include<math.h>

int main() {

    float num[20]; //array where number inputed is stored
    int n;// total number inputed
    int i;// each number inputed
    float sum = 0.0;
    float m;//as mean
    float SD; //as standard deviation
    float v=0.0f;
    int j;

    printf("Calculate the standard deviation of 1-20 numbers.\n");
    printf("Enter the total number: ");
    scanf("%d", &n);

    while(n < 1 || n > 20) {
        printf("can only accept 20 numbers in total.\n");
        printf("enter the total number again: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; i++) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    //printf("the sum of the numbers is %d. \n", sum);

    m = sum / n;
    //printf("the mean is %f. \n", m);

    for(j = 0; j < n; j++) {
        v += (num[j] - m)*(num[j] - m);
    }

    /*do {
        v += (num[i] - m)*(num[i] - m);
        num[i]++;
    } while(num[i] < n);*/
    //printf("the v is %f \n", v);

    SD = sqrt(v / n);
y
    printf("standard deviation is %f", SD);


    return 0;
}
