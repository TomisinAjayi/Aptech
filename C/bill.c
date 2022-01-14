#include<stdio.h>
#include<time.h>

struct details{
    int productcode[5];
    int price[5];
    int sum;
    int total;
};
int main() {

    struct details products;

    products.sum = 0;
    puts("A billing system.");
    printf("Enter total: ");
    scanf("%d", &products.total);
    for(int i = 0; i < products.total; i++) {
        printf("Enter Product code: ");
        scanf("%d", &products.productcode[i]);
        printf("Enter Price: ");
        scanf("%d", &products.price[i]);
    }
    printf("Product Code \t\t Price\n");
    for(int j = 0 ; j < products.total; j++) {
        printf("%d\t\t\t%d\n", products.productcode[j], products.price[j]);
        products.sum += products.price[j];
    }

    printf("The total price of the products is %d", products.sum);

    /*FILE *date;
    // generating date and time
    time_t t = time(NULL);   // not a primitive datatype
    //time(&t);
    date = fopen("Date.txt", "w");
    fprintf("%s", ctime(&t));
    fclose(date);
    printf("\nThis program has been written at (date and time): %s", ctime(&t));
    */

    return 0;
}
