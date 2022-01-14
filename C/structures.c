#include<stdio.h>
/*struct tomisin {
    char hobbies[10];
    int likes;
};
struct students{
    char name[10];
    int age;
    char accountNumber[11];
    // structure in structure add a variable name
    struct tomisin tomi;
};*/

struct customers{
    char accountNumber[11];
};

int main() {

    /*char acctNum[11];
    struct students onestudent = {"tomi", 20 , 12345, {"reading", 5}};
    //puts(onestudent.name);
    //puts(onestudent.accountNumber);
    puts("Enter account number: ");
    gets(acctNum);
    if(strcmp(acctNum, onestudent.accountNumber) == 0) {
        puts("Enter the correct account number: ");
        gets(acctNum);
    }
    // copy of info from one structure var to another
    struct students anotherstudent;
    memcpy(&anotherstudent,&onestudent, sizeof(struct students));
    puts(anotherstudent.name);
    //structure in another structure
    puts(onestudent.tomi.hobbies);*/

    struct customers one;

    puts("Enter account: ");
    gets(one.accountNumber);

    int compare = strcmp(one.accountNumber, "12345");
    while(compare != 0) {
        puts("Enter account again: ");
        gets(one.accountNumber);
        //Tcompare++;
    }
    //
    /*for(int i = 0; i != compare;i++) {
        puts("Enter account again: ");
        gets(one.accountNumber);
    }*/


    return 0;
}
