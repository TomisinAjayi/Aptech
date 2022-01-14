#include<stdio.h>

int main() {

    int pin = 1985;
    int transaction;
    int acctType;
    int amount;
    int acctNum;
    int transfer;
    int money = 2000;
    int withdraw;
    int deposit;
    int anotherTransaction;

    int beginning() {

        printf("What would you like to do?\n");
        printf("Press 1 to make a transfer.\n");
        printf("Press 2 to withdraw cash.\n");
        printf("Press 3 to check account balance.\n");
        printf("Press 4 to deposit.\n");
        scanf("%d", &transaction);

        if(transaction == 1) {
            printf("Which account, Current or Savings?\n");
            printf("Press 1 for Current.\n");
            printf("Press 2 for Savings.\n");
            scanf("%d", &acctType);

            printf("How much will you like to transfer?");
            scanf("%d", &amount);

            printf("Enter the account number you want to transfer to.");
            scanf("%d", &acctNum);

            printf("Would you like to send %d naira to this account number %d?\n", amount, acctNum);
            printf("Press 1 if Yes.\n");
            printf("Press 2 if No.\n");
            scanf("%d", &transfer);

            if(transfer == 1) {
                money = money - amount;
                printf("TRANSACTION SUCCESSFUL.");
            } else {
                printf("TRANSACTION UNSUCCESSFUL.");
            }
            printf("\nWould you like to make another transaction?\n");
            printf("Press 1 if Yes.\n");
            printf("Press 2 if No.\n");
            scanf("%d", &anotherTransaction);
            if(anotherTransaction == 1) {
                beginning();
            }
        }
        else if(transaction == 2) {
            printf("Which account, Current or Savings?\n");
            printf("Press 1 for Current.\n");
            printf("Press 2 for Savings.\n");
            scanf("%d", &acctType);

            printf("How much will you like to withdraw?");
            scanf("%d", &withdraw);
            money = money - withdraw;
            if(money < 0) {
                printf("Insufficient amount.");
            } else {
                printf("You have withdrawn %d Naira and you have %d left.", withdraw, money);
            }

            printf("\nWould you like to make another transaction?\n");
            printf("Press 1 if Yes.\n");
            printf("Press 2 if No.\n");
            scanf("%d", &anotherTransaction);
            if(anotherTransaction == 1) {
                beginning();
            }
        }
        else if(transaction == 3) {
            printf("Which account, Current or Savings?\n");
            printf("Press 1 for Current.\n");
            printf("Press 2 for Savings.\n");
            scanf("%d", &acctType);

            printf("You have %d Naira in your account.", money);

            printf("\nWould you like to make another transaction?\n");
            printf("Press 1 if Yes.\n");
            printf("Press 2 if No.\n");
            scanf("%d", &anotherTransaction);
            if(anotherTransaction == 1) {
                beginning();
            }
        }
        else if(transaction == 4) {
            printf("Which account, Current or Savings?\n");
            printf("Press 1 for Current.\n");
            printf("Press 2 for Savings.\n");
            scanf("%d", &acctType);

            printf("How much do you want to deposit?\n");
            scanf("%d", &deposit);
            money = money + deposit;
            printf("You have deposited %d Naira and have %d Naira in your account.", deposit, money);

            printf("\nWould you like to make another transaction?\n");
            printf("Press 1 if Yes.\n");
            printf("Press 2 if No.\n");
            scanf("%d", &anotherTransaction);
            if(anotherTransaction == 1) {
                beginning();
            }
        } else {
            return 0;
        }

        return 0;
    }

    printf("\t\t\tTomi's ATM machine.\n");
    printf("Enter pin: ");
    scanf("%d", &pin);
    for(int pin = 0; pin != 1985;) {
        printf("Error! Enter the correct pin: ");
        scanf("%d", &pin);
    }
    beginning();

    return 0;
}
