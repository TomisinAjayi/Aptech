#include<stdio.h>

int main() {

    float litre = 0.0;
    int price;
    float standard = 500.0;
    float fueltank;

    printf("Price of petrol per litre is 500 naira.\n");
    printf("How much worth of petrol do you want to buy?");
    scanf("%d", &price);

    printf("what's the size of your fuel tank?");
    scanf("%f", &fueltank);

    litre = price / standard;

    if( litre > fueltank) {
        printf("The amount you want to buy, in litres, will exceed the space of your fuel tank.\n");
        printf("Enter another amount: ");
        scanf("%d", &price);
        litre = price / standard;
        printf("You bought %d naira worth of petrol and have filled up %.2f litre of your petrol tank.", price, litre);
    } else {
        printf("You bought %d naira worth of petrol and have filled up %.2f litre of your petrol tank.", price, litre);
    }

    return 0;

}
