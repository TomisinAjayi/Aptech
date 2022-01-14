#include<stdio.h>
int main() {

    /*int a = 20;
    int *b = &a;
    printf("The memory address of a is %X", &a);
    printf("The memory address should be the same %X", b);
    printf("Value of a is %d", *b);
    a = 200;
    printf("Value of a is %d", a);*/

    /*printf("Find memory address of the inputed numbers: \n");
    int num;
    int i;
    for(i = 0; i < 3; i++) {
        printf("Enter number: ");
        scanf("%d", &num);
    }
    printf("The memory address of the numbers inputed are %X, %X, %X", &num);*/

    //array & pointers
    //int tomi[3] = {10, 20, 30};
    //int *c = &tomi;

    //printf("address of 20 is %X\n", &tomi[1]);

    /*static int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    for(i = 0; i < 10; i++) {
        printf("\n%d.ary[i]= %d, *(ary+i) = %d", i, ary[i], *(ary + i));
        printf(" & ary[i] = %X, ary + i = %X", &ary[i], ary + i);
    }*/

    int l, b, h, tsa;
    int *x = &l;
    int *y = &b;
    int *z = &h;
    int *area = &tsa;

    printf("Total surface area of a cuboid.\n ");
    printf("Enter Length of the cuboid: ");
    scanf("%d", &l);
    printf("Enter breadth of the cuboid: ");
    scanf("%d", &b);
    printf("Enter height of the cuboid: ");
    scanf("%d", &h);
    tsa = 2 * ((*x * *y) + (*x * *z) + (*y * *z));

    printf("The total surface area of the cuboid is %d", *area);

    return 0;

}
