#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    FILE *numbers;

    //compare value in text & value inputed
    char textValue[50];
    char inputValue[50];

    puts("What is your name?");
    gets(inputValue);

    numbers = fopen("numbers.txt", "r");
    textValue = fscanf("%s", &inputValue, numbers);
    //textValue = fgets(inputValue, 50, numbers);

    if(strcmp(inputValue, textValue) != 0) {
        numbers = fopen("numbers.txt", "w");
        fputs(inputValue, numbers);
        puts("Value is different");
        //remove(numbers);
        fclose(numbers);
    } else {
        puts("Value is the same.");
    }

    return 0;
}
