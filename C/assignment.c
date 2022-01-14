#include<stdio.h>

int main() {
    int YearsWithUs;
    int BizDone;

    printf("enter number of years spent in the company: ");
    scanf("%d", &YearsWithUs);
    printf("enter the amount of business done: ");
    scanf("%d", &BizDone);

    if(YearsWithUs >= 10 && BizDone >= 500000) {
        printf("Classified as an MVS.");
    } else {
        printf("A little more effort required.");
    }
}
