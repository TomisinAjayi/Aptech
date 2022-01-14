#include<stdio.h>

/*float X1, X2, Y1, Y2, x, y, C1, C2;

printf("Calculate the simutaneous equation.\n");
printf("enter X1: ");
scanf("%f", &X1);
printf("enter X2: ");
scanf("%f", &X2);
printf("enter Y1: ");
scanf("%f", &Y1);
printf("enter Y2: ");
scanf("%f", &Y2);
printf("enter C1: ");
scanf("%f", &C1);
printf("enter C2: ");
scanf("%f", &C2);
*/

int main() {
    /*// the ! was present and was removed to correct the identifier
    int tomi;
    // the ... was present and was removed to correct the identifier
    int bomi;
    // the 3 was present and was removed to correct the identifier
    int fomi;
    // the ? was present and was removed to correct the identifier
    int pomi;
    // the 6 was present and was removed to correct the identifier
    int vomi;
    // the ! was present and was removed to correct the identifier
    int uche;
    // the ! was present and was removed to correct the identifier
    int ucheTomi;*/

   /* char letter;

    printf("type any letter: ");
    scanf("%c", &letter);

    if(letter == 'A' || letter == 'a') {
        printf("The letter %c is correct", letter);
    } else {
        printf("The letter %c is not a", letter);
    }*/

    float litre = 0.0;
    float price;
    float standard = 212.0;

    printf("Price of petrol per litre is 212 naira.\n");
    printf("How much worth of petrol do you want to buy?");
    scanf("%f naira", &price);

    litre = price / standard;
    printf("You bought %f naira worth of petrol and filled up %f litre of your petrol tank.", price, litre);



    return 0;
}

