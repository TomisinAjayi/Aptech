#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

struct bill{
    char name[50];
    char items[20];
    int totalItems;
    char itemPrice[20];
    char total[6];
};
/*int discount() {
    struct bill customer;
    time_t t;
    time(&t);
    customer.total = 0;
    printf("Date & time: %s\n", ctime(t));
    printf("Items\t\t\tPrice\n");
    for(int j = 0; j < customer.totalItems; j++) {
        printf("%s\t\t\t%d\n", customer.items[j], customer.itemPrice[j]);
        y = customer.total - '0';
        y += x;
        //customer.total += customer.itemPrice[i];
    }
    return customer.total;
}*/
int main() {

    FILE *receipt;
    struct bill customer;
    int x, y;
    printf("Customer Billing System.\n");
    printf("Enter Name: ");
    gets(customer.name);
    printf("\nYou can only purchase up to 20 items.\n");
    printf("Buy 5 items or more, get 10%% off.\n");
    printf("Enter the total amount of items you want to purchase: ");
    scanf("%d", &customer.totalItems);

    while(customer.totalItems < 1 || customer.totalItems > 20) {
        printf("\nYou can only purchase 20 items.Try again\n");
        printf("Enter the total amount of items you want to purchase: ");
        scanf("%d", &customer.totalItems);
    }
    for(int i = 0; i < customer.totalItems; i++) {
        printf("%d. Enter Item: ", i+1);
        gets(customer.items[i]);
        printf("Enter Price of item: ");
        gets(customer.itemPrice[i]);
        x = customer.itemPrice[i] - '0';

    }

    if(customer.totalItems >= 5) {
        printf("!!!You purchased 5 items or more, you get 10%% off.!!!\n");
        //discount();
        printf("Total\t\t\t%d", y);
        y = (9 * y) / 10;
        printf("\nDiscounted Price\t%d", y);
    } else {
        //discount();
        printf("Total\t\t\t%d", y);
    }

    receipt = fopen("receipt.txt", "a");
    fputs("Name of customer: ", receipt);
    fputs(customer.name, receipt);
    fputs("\n", receipt);
    fputs("Item\t\t\tPrice", receipt);
    for(int a = 0; a < customer.totalItems; a++) {
        fputs(customer.items[a],receipt);
        fputs("\t\t\t", receipt);
        fputs(customer.itemPrice[a], receipt);
    }
    fputs("Price Paid:\t\t", receipt);
    fputs(customer.total, receipt);
    fclose(receipt);

    return 0;
}
