#include<stdio.h>
#include<stdlib.h>

int main()
{
	int tobe;

	FILE* cpgaCalculator;

	float credits;
	float CGPA;
	char name;
	char grade;
	char course[25];
	char string[60];

	float count = 0;
	float Score = 0;
	float totalScore = 0;
	float totalCredits = 0;
	float totalCreditsEarned = 0;

	printf("Here's the students name, the course titles,\n\n");
	printf("the letter grades of that course and the number of credits each course is worth.\n\n");
	printf("Then the calculation of the CGPA.\n");

	cpgaCalculator = fopen("grades.txt", "r");
	if (!cpgaCalculator)
	{
		printf("\n\nCannot open file grades.txt \a\n");
		exit(101);
	}

	fgets(string, 60, cpgaCalculator);
	printf("\n\nStudent name: %s\n\n", string);
	printf("     |Course Name| |Grade| |Units|\n\n");

	while (fscanf(cpgaCalculator, "%s %c %f \n", &course, &grade, &credits) != EOF)
	{
		printf("%15s      %3c     %12.1f \n\n", course, grade, credits);

		if (grade == 'A' || 'a'){
			Score = 5.0;
		}
		else if (grade == 'B' || 'b'){
			Score = 4.0;
		}
		else if (grade == 'C' || 'c'){
			Score = 3.0;
		}
		else if (grade == 'D' || 'd'){
			Score = 2.0;
		}
		else if (grade == 'E' || 'e'){
			Score = 1.0;
		}
        else if (grade == 'F' || 'f'){
			Score = 0.0;
		}
		else {
            printf("Invalid grade.");
		}
		totalCredits = credits + credits + credits + credits + credits + credits;
		totalScore = credits*Score;
		totalCreditsEarned += totalScore;
		count++;
	}

	CGPA = totalCreditsEarned / totalCredits;

		fclose(cpgaCalculator);


	printf("\n");
	printf("\nThe Total Credits of this student are:  %.1f \n", totalCreditsEarned);
	printf("\nThen CGPA for this Student is:  %.2f \n\n\n", CGPA);
	printf("\n");


	printf("\n\n\nThe program has finished. Press enter to exit. \n");
	scanf_s("%d", &tobe);
	return 0;
}
