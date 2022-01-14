#include<stdio.h>
#include<string.h>

int addingarray(int myarray[]) {
    int sum = 0;
    for(int i =0; i < 5; i++) {
        sum = sum + myarray[i];
    }
    return sum;
}
int main() {

    /*char name[5] = "tomi";
    char greeting[7] = "Hello ";

    strcat(greeting, name);
    puts(greeting);*/

    char title[10] = "queen";
    char name[10];
    strcpy(name, title);
    puts(name);
    printf("Hello %s\n", name);
    printf("length is %d\n", strlen(name));
    int my[5] = {20, 30, 40, 50, 60};
    printf("sum is %d", addingarray(my));
}
