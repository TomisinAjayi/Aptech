#include<stdio.h>

int main() {

    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    switch(score / 10) {
        case 10 :
        case 9 :
        case 8 :
        case 7 :
            printf("Your grade is A");
            break;
        case 6 :
            printf("Your grade is B");
            break;
        case 5 :
            printf("Your grade is C");
            break;
        case 4 :
            printf("Your grade is D");
            break;
        case 3 :
            printf("Your grade is E");
            break;
        default :
            printf("Your grade is F");
            break;
    }

    return 0;
}
