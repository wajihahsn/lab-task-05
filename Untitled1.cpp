#include <stdio.h>

int main ()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age > 0 && age <= 12)
	{
		printf("Child \n");
	}
	
	else if (age >= 13 && age <= 19)
	{
		printf("Teenager \n");
	}
	
	else if (age >= 20 && age <= 39)
	{
		printf("Adult \n");
	}
	
	else if (age >= 40)
	{
		printf("Senior \n");
	}
	
	return 0;
}