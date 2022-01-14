#include<stdio.h>
int main() {

    int num[4], i, operate, anothercalculation;
    int total = 0;
    int sum = 0;
    int minus = 0;
    int multiply = 1;
    float divide = 1.0;

    printf("\t\tNew Calculator.\n");
    int calculate(){
        printf("Press 1 to add(+).\n");
        printf("Press 2 to subtract(-).\n");
        printf("Press 3 to multiply(*).\n");
        printf("Press 4 to divide(/).\n");
        printf("Press 5 to find the square(^).\n");
        printf("Press 6 to find squareroot(sqrt).\n");
        scanf("%d", &operate);

        //addition
        if(operate == 1) {
            sum += num[i];
            total = sum;
            printf("Total = %d\n", total);
            printf("want to perform another calculation with different operator?\n");
            printf("Press 1 for a fresh start\n");
            printf("Press 2 with total of previous calulation\n");
            printf("Press 3 to cancel operation.\n");
            scanf("%d", &anothercalculation);
            if(anothercalculation == 1) {
                main();
            } else if(anothercalculation == 2) {
                calculate();
            } else {
                return 0;
            }

        }
        // subtraction
        else if(operate == 2) {
            minus = num[i] - num[i+1];
            printf("Total = %d\n", minus);
            printf("want to perform another calculation with different operator?\n");
            printf("Press 1 for a fresh start.\n");
            printf("Press 2 with total of previous calulation.\n");
            printf("Press 3 to cancel operation.\n");
            scanf("%d", &anothercalculation);
            if(anothercalculation == 1) {
                main();
            } else if(anothercalculation == 2) {
                calculate();
            } else {
                return 0;
            }

        }
        // multiplication
        else if(operate == 3) {
            multiply *= num[i];
            printf("Total = %d\n", multiply);
            printf("want to perform another calculation with different operator?\n");
            printf("Press 1 for a fresh start.\n");
            printf("Press 2 with total of previous calulation.\n");
            printf("Press 3 to cancel operation.\n");
            scanf("%d", &anothercalculation);
            if(anothercalculation == 1) {
                main();
            } else if(anothercalculation == 2) {
                calculate();
            } else {
                return 0;
            }

        }
            //division
        else if(operate == 4) {
            divide = num[i] / num[i+1];
            printf("Total = %f\n", divide);
            printf("want to perform another calculation with different operator?\n");
            printf("Press 1 for a fresh start.\n");
            printf("Press 2 with total of previous calulation.\n");
            printf("Press 3 to cancel operation.\n");
            scanf("%d", &anothercalculation);
            if(anothercalculation == 1) {
                main();
            } else if(anothercalculation == 2) {
                calculate();
            } else {
                return 0;
            }
            // square
        } else if(operate == 5) {
            minus = num[i] - num[i+1];
            total = minus;
            printf("Total = %d\n", total);
            printf("want to perform another calculation with different operator?\n");
            printf("Press 1 for a fresh start.\n");
            printf("Press 2 with total of previous calulation.\n");
            printf("Press 3 to cancel operation.\n");
            scanf("%d", &anothercalculation);
            if(anothercalculation == 1) {
                main();
            } else if(anothercalculation == 2) {
                calculate();
            } else {
                return 0;
            }
            // square root
        } else if(operate == 6) {
            minus = num[i] - num[i+1];
            total = minus;
            printf("Total = %d\n", total);
            printf("want to perform another calculation with different operator?\n");
            printf("Press 1 for a fresh start.\n");
            printf("Press 2 with total of previous calulation.\n");
            printf("Press 3 to cancel operation.\n");
            scanf("%d", &anothercalculation);
            if(anothercalculation == 1) {
                main();
            } else if(anothercalculation == 2) {
                calculate();
            } else {
                return 0;
            }
        } else {
            printf("Invalid number\n");
            printf("Enter a valid number to assign operator.\n");
            calculate();

        }
    }
        for(i = 0; i < 3; i++) {
            printf("Enter number: ");
            scanf("%d", &num[i]);
        }
        calculate();


    /*printf("How many ")
    for(int i = 0; i < 20; i++) {
        if(i > 20) {
            printf("can only accept 20 numbers.");
        } else {
            printf("Enter Number: ");
            scanf("%d", &num);
        }
    }*/

    return 0;
}
