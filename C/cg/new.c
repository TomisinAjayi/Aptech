#include <stdio.h>
struct bill{
    int productCode[5];
    int productPrice[5];
};

int main()
{
    // Declare the variable
    int a;
    int sum = 0;
    struct bill user;
    for(a = 0; a < 5; a++) {
        // Read the variable from STDIN
        scanf("%d %d", &user.productCode[a], &user.productPrice[a]);
    }
    for(a = 0; a < 5; a++) {
        // Output the variable to STDOUT
        sum += user.productPrice[a];
    }
    printf("%d", sum);
    // Note that you need to explicitly return 0 in main() function,
    // otherwise your solution won't get accepted
    return 0;
}
