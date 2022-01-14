#include<stdio.h>
#include<time.h>

int main() {

    //generating date and time
    time_t t;   // not a primitive datatype
    time(&t);

    printf("\nThis program has been written at (date and time): %s", ctime(&t));

    char name[50] = "20";
    int sum = int(name);
    printf("%d", sum);
    return 0;
}
