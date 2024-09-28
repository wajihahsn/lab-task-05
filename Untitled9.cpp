#include <stdio.h>

int main ()
{
	int Year;
	printf("Enter the year: ");
	scanf("%d", &Year);
	
	if ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0)
	{
		printf("%d is a 'leap' year!", Year);
	}
	else
	{
		printf("%d is NOT a 'leap' year!", Year);
	}
	
	return 0;
}