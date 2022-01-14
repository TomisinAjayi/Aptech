#include<stdio.h>
int main() {

// variables and datatypes.
    /*int principal, period;
    float rate, si;
    principal = 1000;
    period = 3;
    rate = 8.5;
    si = principal * period * rate / 100;
    printf("%.2f", si);

    int a, b, c, sum;
    printf("Sum of 3 numbers.\n");
    printf("\nEnter any 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b +c;
    printf("\nsum = %d", sum);

//lab
    int num, square;
    printf("\nFind the square of the number inputed\n");
    printf("Enter number: ");
    scanf("%d", &num);
    square = num * num;
    printf("The square of %d is %d", num, square);*/

    /*float area, perimeter;
    int radius;
    float pi = 3.14;
    printf("Calculate area and perimeter of a circle.\n");
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;
    printf("The area of the circle is %.2f.\n The perimeter of the circle is %.2f.", area, perimeter);
*/

    /*int salary, age;
    printf("Enter details.\n");
    printf("What's your salary: ");
    scanf("%d", &salary);
    printf("How old are you? ");
    scanf("%d", &age);
    printf("You are %d years old and you earn %d naira in a month.", age, salary);
*/

//learning const
    /*const tomi = 19;
    printf("Enter another number: ");
    scanf("%d", &tomi);
    printf("%d", tomi);*/

// operators and expressions

    /*int i = 1;
    int j = 3;
    int x = i / j;
    int y = (float)i / (float)j;
    printf("int is %d and in float %f", x, y);*/

    /*int a, b, c;
    printf("Accept 3 numbers.\n");
    printf("Enter the numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The 3 numbers entered are %d, %d, %d.", a, b, c);*/

    /*float z = 0.0;
    int a = 10;
    int b = 7;
    float c = 15.75;
    int d = 4;
    int e = 2;
    float f = 5.6;
    z = a * b + (c / d) - e * f;
    printf("z = %.2f", z);*/

    /*float area, perimeter;
    int length, breadth;
    printf("Calculate area and perimeter of a rectangle.\n");
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter breadth: ");
    scanf("%d", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("The area of a rectangle is %.2f and the perimeter is %.2f",area, perimeter);
*/

    /*int basic_salary = 12000;
    float da = (12 * basic_salary) / 100;
    int hra = 150;
    int ta = 120;
    int others = 450;
    float pf = (14 * basic_salary) / 100;
    float it = (15 * basic_salary) / 100;
    float net_salary;
    net_salary = basic_salary + da + hra + ta + others - (pf + it);
    printf("net salary is %.2f", net_salary);*/

//lab

    /*float p, n, r;
    p = 1000;
    n = 2.5;
    r = 10.5;
    printf("Amount is: %.2f", p*n*r/100);*/

    /*printf("40/17*13/3 = %d", 40/17*13/3);
    printf("\n40/17*13/3.0 = %.2lf", 40/17*13/3.0);
    printf("\n40/17*13.0/3 = %.2lf", 40/17*13.0/3);
    printf("\n40/17.0*13/3 = %.2lf", 40/17.0*13/3);
    printf("\nResult= %d", (4-2*9/6<=3&&(10*2/4-3>3||(1<5&&8>10))));

    printf("\nResult = %d", 10*3^6*6+5-2 && (2*2+6/3>1 || 2>8));*/

    /*float number;
    float feet = 0.0;
    float inches = 0.0;
    printf("Convert cm to feet and inches.\n");
    printf("2.54 cm = 1 inch; 12 inches = 1 foot.\n");
    printf("Enter cm: ");
    scanf("%f", &number);
    inches = number / 2.54;
    feet = inches / 12;

    printf("%.1f cm is %.1f in inches and is %.1f in feet.", number, inches, feet);
    */

// standard input and output
    /*char letter;
    printf("Enter a character: ");
    letter = getchar();
    printf("Character entered is %c", letter);*/

    /*putchar('H');
    putchar('\n');
    putchar('\t');
    putchar('E');
    putchar('\n');
    putchar('\t');
    putchar('\t');
    putchar('L');
    putchar('\n');
    putchar('\t');
    putchar('\t');
    putchar('\t');
    putchar('L');
    putchar('\n');
    putchar('\t');
    putchar('\t');
    putchar('\t');
    putchar('\t');
    putchar('O');*/

    /*int sum = 0;
    int a, b;
    a = 5;
    b = 10;
    sum = a + b;
    char letter = 'y';
    char str[8] = "welcome";
    float discount = 10.5;
    float dump = 67.345678;
    printf("The sum of the numbers is %d\n", sum);
    printf("%s\n", str);
    printf("letter is %c\n", letter);
    printf("discount is %f", discount);
    printf("dump in 2 decimal place %.2f", dump);*/

    /*char letter = 'A';
    char *a = &letter;
    printf("ASCII character of a is %X\n", a);

    char letter2 = 'b';
    char *b = &letter2;
    printf("ASCII character of a is %X", b);*/

    /*char name[100];
    int basic, daper;
    float bonper, loandet, salary;

    printf("Calculate salary.\n");
    printf("Enter name: ");
    scanf("%s", &name);
    printf("Enter basic: ");
    scanf("%d", &basic);
    printf("Enter percentage of DA: ");
    scanf("%f", &daper);
    printf("Enter percentage bonus: ");
    scanf("%f", &bonper);
    printf("Enter loan amount to be debited: ");
    scanf("%f", &loandet);

    salary = basic + basic * daper / 100 + bonper * basic / 100 - loandet;
    printf("Name\t\t Basic\t\t Salary\t\t\n");
    printf("%s\t\t %d\t\t %.2f", name, basic, salary);*/

//condition
    /*int x, y;
    char a = 'y';

    x = y = 0;
    if(a == 'y') {
        x += 5;
        printf("The numbers are %d and %d", x , y);
    }*/

    /*int year;
    printf("\n please enter a year: ");
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("\n%d is a leap year", year);
    } else {
        printf("\n%d is not a leap year", year);
    }*/

    /*char c;
    printf("Please enter a character: ");
    scanf("%c", &c);
    if(c >= 'A' && c <= 'Z') {
        printf("Lowercase character = %c", c + 'a' - 'A');
    } else {
        printf("Character entered is = %c", c);
    }*/

    /*int productcode;
    float orderamount, rate = 0.0;
    printf("Product \t\t Code\n");
    printf("Computer Stationary \t 1\n");
    printf("fixed Disks \t\t 2\n");
    printf("Computers \t\t 3\n");

    printf("\nPlease enter the product code:");
    scanf(" %d", &productcode);
    printf("\nPlease enter the order amount:");
    scanf(" %f", &orderamount);

    if(productcode == 1) {
        if(orderamount >= 500) {
            rate = 0.12;
        } else if(orderamount >= 300) {
            rate = 0.08;
        } else {
            rate = 0.02;
        }
    } else if(productcode == 2) {
        if(orderamount >= 2000) {
            rate = 0.10;
        } else if(orderamount >= 1500) {
            rate = 0.05;
        }
    } else if(productcode == 3) {
        if(orderamount >= 5000) {
            rate = 0.10;
        } else if(orderamount >= 2500) {
            rate = 0.05;
        }
    }
    orderamount -= orderamount * rate;
    printf("The net order amount is %.2f \n", orderamount);*/

    /*int a, b, product, difference;
    printf("Check if a is divisible by b\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    if(a % b == 0) {
        printf("a is divisible by b\n");
    } else {
        printf("a isn't divisible by b\n");
    }
    product = a * b;

    if(product >= 1000) {
        printf("Product of a and b is greater than or equal to 1000");
    } else {
        printf("Product is less than 1000\n");
    }

    difference = a - b;
    if(difference == a || difference == b) {
        printf("Difference is equal to value %d\n", difference);
    } else {
        printf("Difference isn't equal to any of the values entered.\n");
    }*/

    /*int score; //didn't get this. re-check
    printf("students's grade.\n");
    printf("Enter score: ");
    scanf("%d", &score);
    if(score >= 75) {
        printf("Grade is A");
    } else if(score >=60 || score < 75) {
        printf("Grade is B");
    } else if(score >= 45 || score < 60) {
        printf("Grade is C");
    } else if(score >= 35 || score < 45) {
        printf("Grade is D");
    } else if(score < 35) {
        printf("Grade is E");
    }*/

    /*int a, b, c;
    printf("Return the highest number.\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    printf("\na = %d, b = %d, c = %d\n", a, b, c);
    if(a > b && a > c) {
        printf("%d is the highest.\n", a);
    } else if(b > c && b > c) {
        printf("%d is the highest value.\n", b);
    } else if(c >a && c > b) {
        printf("%d is the highest value.\n", c);
    } else {
        printf("They are the same values.");
    }*/


//loop
    /*for(int i = 0; i < 100; i++) {
        printf("%d. Existence is pain.\n", i+1);
    }*/

    /*int num = 0;
    printf("Print even numbers from 1 - 25.\n");
    for(int x = 1; x <= 25; x++) {
        num = x % 2;
        if(num == 0) {
            printf("%d\n", x);
        }
    }*/
    //or
    /*for(int x = 2; x <= 25; x+=2) {
        printf("%d\n", x);
    }*/

    /*int a, b, max;
    printf("Please enter the max value.n");
    printf("For which a table can be printed: ");
    scanf("%d", &max);
    for(a = 0, b = max; a <= max; a++, b--) {
        printf("\n%d + %d = %d", a, b, a + b);
    }*/

    //times table
    /*int num, times;
    printf("Multiplication table. Up to number 12\n");
    printf("Enter number of times: ");
    scanf("%d", &num);
    for(int i = 0; i <= 12; i++) {
        times = num * i;
        printf("%d x %d = %d\n", i, num, times);
    }

    int a, b, c;
    a = 0;
    printf("Enter no of rows: ");
    scanf("%d", &a);
    printf("\n");
    for(b = 0; b < a; b++) {
        printf("\n");
        for(c = 0; c <= b; c++) {
            printf("*");
        }
    }*/

    /*int num;
    for(num = 0; num != 255;) {
        printf("Enter no: ");
        scanf("%d", &num);
    }*/

    /*for( ; ;) {
        printf("Existence is Pain!\n");
    }*/

    //infinite while
    /*int count = 0;
    while(count < 100) {
        printf("This goes on forever, HELP!!!!\n");
        count += 10;
        printf("\t%d", count);
        count -= 10;
        printf("\t%d", count);
        printf("\Ctrl - C will help");
    }*/

    // type casting, data-type conversion.
    /*int sum = 17, count = 5;
    double mean;

    mean = (double) sum / count;
    printf("Value of mean: %f\n", mean);*/

    //try it
    /*int num;
    for (num = 100; num >= 5; num--) {
        if(num % 5 == 0) {
            printf("%d\t", num);
        }
    }*/
    /*int num1, num2;
    int sum = 0;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    if(num1 % 2 != 0 && num2 % 2 != 0) {
        sum = num1 + num2;
        printf("sum is %d", sum);
    } else {
        printf("At least one is even, can't sum");
    }*/

    //fibonacci sequence

    //4.a
    /*int a, b, c;
    /*a = 0;
    printf("Enter no of rows: ");
    scanf("%d", &a);
    printf("\n");*/
    /*for(b = 0; b < 7; b++) {
        printf("\n");
        for(c = b; c <= b; c--) {
            printf("*");
        }
    }*/

    char name[5];
    int age;

    printf("Enter Name: ");
    scanf("%s", &name);
    printf("Enter Age: ");
    scanf("%d", &age);

    for(int i = 0; i < age; i++) {
        printf("%d. %s\n", i+1, name);
    }


    return 0;
}
