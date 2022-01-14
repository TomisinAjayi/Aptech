#include<stdio.h>

int main() {

    FILE *report;
    char course[20][30];
    char grade[20][5];
    float cgpa;
    int units[20];
    int totalCourse;
    int score;
    int totalUnits = 0;
    int total = 0;
    long int matricnumber;

    printf("Calculate your cgpa.\n");
    printf("Enter your matric Number: ");
    scanf("%ld", &matricnumber);

    printf("How many courses did you offer? ");
    scanf("%d", &totalCourse);
    for(int i =0; i < totalCourse; i++) {
        printf("%d. Enter course code: ", i+1);
        getchar();
		scanf("%[^\n]s",course[i]);

        printf("Enter grade: ");
        getchar();
		scanf("%[^\n]s",grade[i]);

        printf("Enter number of units: ");
        scanf("%d", &units[i]);
    }
    printf("Course\t\tGrade\t\tUnits\n");
    for(int j = 0; j < totalCourse; j++) {
        printf("%d. %s\t\t%s\t\t%d\n", j+1, course[j], grade[j], units[j]);
        if(grade[j] == "A" || "a") {
            score += 5;
        } else if(grade[j] == "B" || "b") {
            score += 4;
        } else if(grade[j] == "C" || "c") {
            score += 3;
        } else if(grade[j] == "D" || "d") {
            score += 2;
        } else if(grade[j] == "E" || "e") {
            score += 1;
        } else if(grade[j] == "F" || "f") {
            score += 0;
        } else {
            printf("Invalid grade.");
        }
        total += units[j] * score;
        totalUnits += units[j];
    }

    printf("Total is %d\n", total);
    printf("Total units is %d\n", totalUnits);
    cgpa = total / totalUnits;

    report = fopen("report.txt", "a");
    fputs("\nStudent's Matric-Number: ", report);
    fprintf(report, "%ld", matricnumber);
    fputs("\n", report);
    fputs("Course Code||Grade\t   ||Units\n", report);
    for(int j = 0; j < totalCourse; j++) {
        fprintf(report, "%s\t\t", course[j]);
        fprintf(report, "%s\t\t", grade[j]);
        fprintf(report, "%d\n", units[j]);
    }
    fprintf(report,"CGPA = %.2f\n", cgpa);
    fclose(report);

    printf("Your cgpa is %.2f", cgpa);
    return 0;
}
