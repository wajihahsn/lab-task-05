#include <stdio.h>

int main ()
{
	int num;
	printf("Enter a number to check if it is divisible by both 3 and 5: ");
	scanf("%d", &num);
	
	if (num % 3 == 0 && num % 5 == 0)
	{
		printf("Yes, It is DIVISIBLE by both. \n");
	}
	
	else
	{
		printf("No, It is NOT DIVISIBLE by both. \n");
	}
	
	return 0;
}