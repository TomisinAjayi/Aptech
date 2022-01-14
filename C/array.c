#include<stdio.h>
#include<string.h>

int main() {
    /*float a = 20.0;
    float b = 30.0;

    float sum = a+b;

    float product = a*b;

    float division = b/a;

    printf("The sum of two numbers is %f\n", sum);
    printf("The product of two numbers is %f\n", product);
    printf("The division of two numbers is %f\n", division);*/

    //one dimension
    /*int tomi[6];
    tomi[0] = 10;
    tomi[1] = 2;
    tomi[2] = 3;
    tomi[3] = 4;
    tomi[4] = 5;
    tomi[5] = tomi[0] * tomi[1] * tomi[2] * tomi[3] * tomi[4];
    printf("The product of five numbers is %d", tomi[5]);*/

    //multi-dimension
    /*int tomi[2][3];
    tomi[0][0] = 20;
    tomi[0][1] = 30;
    tomi[0][2] = 40;
    tomi[1][0] = 50;
    tomi[1][1] = 60;
    tomi[1][2] = 70;

    printf("The sum of ")*/

    //average
    /*float average;
    float num[4];
    float sum;

    printf("Calculate the average of five numbers.\n");

    for(int i = 0; i < 5; i++) {
        printf("Enter Number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    float avg = sum / 5;
    printf("Average is %f", avg);*/

    //average of any number from 1 - 100
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while(n > 100 || n < 1) {
        printf("ERROR! number should be  from 1-100.\n");
        printf("Enter another number! ");
        scanf("%d", &n);
    }

    for(i = 0; i<n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    avg = sum / n;
    printf("Average = %.2f", avg);

    /*int tomi[5];
    tomi[0] = 10;
    tomi[1] = 20;
    tomi[2] = 30;
    tomi[3] = 40;
    tomi[4] = 50;

    for(int num = 0; num < 5; num++) {
        printf("Tomi is %d\n", num[tomi]);
    }*/

    /*char name[7] = "tomisin";
    for(int i = 0; i < 7; i++) {
        printf("%c", name[i]);
    }*/

    /*char somename = 'A';
    char letter[1];

    printf("Enter any letter (A-Z): ");
    scanf("%c", &letter);

    if((strcmp(somename, letter)) == 0) {
        printf("You just typed letter A");
    } else {
        printf("You didn't type my letter");
    }*/

    /*int ary[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    //or int ary[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    printf("%d", ary[1][1]);*/

    /*int i, n = 0;
    int item;
    char x[10][12];
    char temp[12];

    printf("Enter each string on a separate line\n\n");
    printf("Type 'END' when over \n\n");
    // read in the list of strings
    do {
        printf("String %d : ", n + 1);
        scanf("%s", x[n]);
    } while(strcmp(x[n++], "END"));
    //reorder the list of strings
    n = n - 1;
    // find lowest of remaining strings
    for(item = 0; item < n-1; item++) {
        for(i = item + 1; i < n; i++) {
            if(strcmp(x[item], x[i]) > 0) {
                strcpy(temp, x[item]);
                strcpy(x[item], x[i]);
                strcpy(x[i], temp);
            }
        }
    }
    // display arranged list of strings
    printf("Recorded list of strings : \n");
    for(i = 0; i < n; i++) {
        printf("\nString %d is %s", i + 1, x[i]);
    }*/

    return 0;
}
