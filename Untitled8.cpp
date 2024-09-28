#include <stdio.h>

int main ()
{
	int num = 35;
	int count = (num & 1) + ((num >> 1) & 1) + ((num >> 2) & 1) + ((num >> 3) & 1) + ((num >> 4) & 1) + ((num >> 5) & 1);
	
	printf("Number of 1s is: %d\n", count);
	
	return 0;	
}