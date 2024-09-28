#include <stdio.h>

int main ()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if (num > 0)
	{
		if (num % 2 == 0)
		{
			printf("Positive and even number. \n");
		}
		else
		{
			
		printf("Positive and odd number. \n");
		}
	}
	
	else if (num == 0)
	{
		printf("Zero value. \n");
	}
	
	else if (num < 0)
	{
		printf("Negative number. \n");
	}
	
	return 0;	
}