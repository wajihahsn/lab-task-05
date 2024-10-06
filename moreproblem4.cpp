#include <stdio.h>

int main ()
{
	int age, creditscore;
	float income;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter your credit score: ");
	scanf("%d", &creditscore);
	printf("Enter your income: ");
	scanf("%f", &income);
	
	if (age >= 18 && creditscore >= 500 && income >= 50000)
	{
		printf("Congrats! You can apply for loan!\n");
	}
	else
	{
		printf("Sorry, you cannot apply for loan!\n");
	}
	
	if (age < 18)
	{
		printf("Age must be 18 years or above!\n");
	}
	
	if (creditscore < 500)
	{
		printf("Credit score must be 500 or above!\n");
	}
	
	if (income < 50000)
	{
		printf("Income must be 50,000 or above!\n");
	}
	
	return 0;
}