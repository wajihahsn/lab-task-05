#include <stdio.h>

int main ()
{
	float attd, exam, marks;
	printf("Enter the attendance: ");
	scanf("%f", &attd);
	printf("Enter the marks of exam: ");
	scanf("%f", &exam);
	printf("Enter the total marks of assignments: ");
	scanf("%f", &marks);
	
	if (attd >= 75)
	{
		if ((exam <= 60 && exam >= 50) || (marks <= 60 && marks >= 50))
		{
			printf("Grade: D");
		}
		else if ((exam <= 70 && exam > 60) || (marks <= 70 && marks > 60))
		{
			printf("Grade: C");
		}
		else if ((exam <= 80 && exam > 70) || (marks <=80 && marks > 70))
		{
			printf("Grade: B");
		}
		else if ((exam <= 90 && exam > 80) || (marks <= 90 && marks > 80))
		{
			printf("Grade: A");
		}
		else if ((exam <= 100 && exam > 90) || (marks <= 100 && marks > 90))
		{
			printf("Grade: A*");
		}
		else
		{
			printf("Grade: F");
		}
	}
	else
	{
		printf("Your attedance is below 75%, contact the HOD for result approval.");
	}
	
	return 0;
}