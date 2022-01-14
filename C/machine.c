#include<stdio.h>
//#include<stdlib.h>
int main()
{
 int pin;
 int choice;
 int withdraw;
 float cash = 0.0;
 int deposit;
 char c;

 printf("Tomi's atm\n");

 printf("Kindly enter your pin: ");
 scanf("%d", &pin);
 if(pin != 1985) {
    printf("Kindly enter the right pin.\n");
    scanf("%d", &pin);
 }
 do{
  printf("Enter\n");
  printf("1. Withdraw\n");
  printf("2. Deposit\n");
  printf("3. Check Balance\n");
  scanf("%d",&choice);
 switch(choice)
 {
  case 1:
  {
   printf("Enter Amount to withdraw\n");
   scanf("%d",&withdraw);
   if(withdraw%100==0)
   {
    if(cash>=withdraw)
        {
        cash -=withdraw;
        printf("Amount After withdrawal of cash is %f\n",cash);
       }
       else
    {
    printf("You don't have enough Amount to Withdraw. Please Deposit Amount\n");
        }
   }
   else
   {
    printf("Enter Withdrawal Amount in 100's\n");
   }
   break;
  }
  case 2:
  {
   printf("Enter Amount to deposit\n");
   scanf("%d",&deposit);
   if(deposit%100==0)
   {
       cash=cash+deposit;
       printf("Balance After Depositing Amount is %f\n",cash);
   }
   else
   {
    printf("Please Enter Amount in 100's\n");
   }
   break;
  }
  case 3:
  {
   printf("Balance in the Account is %.2f\n",cash);
   break;
  }
  default :
  {
   printf("Enter Valid Choice\n");
   break;
  }
 }
 printf("To Continue Press 'Y' else any letter\n");
 fflush(stdin);
 scanf("%c",&c);
   }while(c=='y' || c=='Y');
   printf("Thanks for using our ATM\n");
}
