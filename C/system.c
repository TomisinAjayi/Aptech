#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {

    FILE *receipt;
    char name[50];
    char item[20][100];
	int totalItems;
	int price[20];
	int total = 0;
	time_t t;

    printf("Customer Billing system.\n");
	printf("Enter name: ");
	gets(name);
	printf("\nYou can only purchase up to 20 items.\n");
    printf("Buy 5 items or more, get 10%% off.\n");
    printf("Enter the total amount of items you want to purchase: ");
    scanf("%d", &totalItems);

    while(totalItems < 1 || totalItems > 20) {
        printf("\nYou can only purchase 20 items. Try again\n");
        printf("Enter the total amount of items you want to purchase: ");
        scanf("%d", &totalItems);
    }
	printf("Enter items...\n");
	for(int i=0; i<totalItems; i++) {
		printf("%d. Enter item: ",i+1);
		getchar(); //read & ignore extra character (NULL)
		//read string with spaces
		scanf("%[^\n]s",item[i]);
		printf("Enter Price: ");
		scanf("%d", &price[i]);
	}

	//date
    time(&t);
    printf("\nDate & time: %s\n", ctime(&t));
	printf("Hello %s", name);
	printf("\nItems\t\t\tPrice\n");
	for(int j=0; j<totalItems; j++) {
		printf("%d. %s\t\t\t%d\n",j+1,item[j], price[j]);
		total += price[j];
	}

	if(totalItems >= 5) {
        printf("\n!!!You purchased 5 items or more, you got 10%% off.!!!\n");
        printf("Total\t\t\tN%d", total);
        total = (9 * total) / 10;
        printf("\nDiscounted Price\tN%d", total);

        //adding info to file
        receipt = fopen("receipt.txt", "w");
        fprintf(receipt, "\n%s", ctime(&t));
        fputs("Customer's name: ", receipt);
        fputs(name, receipt);
        fputs("\n", receipt);
        for(int a = 0; a < totalItems; a++) {
            fprintf(receipt, "%d. Item: %s", a+1, item[a]);
            fprintf(receipt, " =  N%d\n", price[a]);
        }
        fputs("10% off applied.\n", receipt);
        fprintf(receipt, "Total: %d", total);
        fclose(receipt);
        printf("\nRecord saved successfully.");
    } else {
        printf("Total\t\t\tN%d", total);

        //adding info to file
        receipt = fopen("receipt.txt", "w");
        fprintf(receipt, "\n%s", ctime(&t));
        fputs("Customer's name: ", receipt);
        fputs(name, receipt);
        fputs("\n", receipt);
        for(int a = 0; a < totalItems; a++) {
            fprintf(receipt, "%d. Item: %s", a+1, item[a]);
            fprintf(receipt, " =  N%d\n", price[a]);
        }
        fprintf(receipt, "Total: %d", total);
        fclose(receipt);
        printf("\nRecord saved successfully.");
    }


	return 0;
}
