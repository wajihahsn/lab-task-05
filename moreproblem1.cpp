#include <stdio.h>

int main ()
{
	int num1, num2, num3, max;
	printf("Enter the 3 numbers: ");
	scanf ("%d %d %d", &num1, &num2, &num3);
	
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			max = num1;
			printf("%d is the greatest\n", max);
		}
		
	}
	else if (num2 > num1)
	{
		if (num2 > num3)
		{
			max = num2;
			printf("%d is the greatest\n", max);
		}
	}
	else if (num3 > num1)
	{
		if (num3 > num2)
		{
			max = num3;
			printf("%d is the greatest\n", max);
		}
	}
	
	return 0;
}