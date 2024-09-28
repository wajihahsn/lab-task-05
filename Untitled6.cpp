#include <stdio.h>

int main ()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	const char* result = (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero";
	
	printf("The number is: %s\n", result);
	
	return 0;
}