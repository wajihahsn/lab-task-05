#include <stdio.h>

int main ()
{
	int age;
	char CStatus;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Mention the Citizenship Status, use Y/N to assure: ");
	scanf(" %c", &CStatus);
	
	if ((CStatus == 'Y' || CStatus == 'y') && age >= 18)
	{
		printf("Eligible to vote. \n");
	}
	
	else
	{
		printf("Not eligible to vote. \n");
	}
	
	return 0;
}