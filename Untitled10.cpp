#include <stdio.h>

int sumOfDigits(int n) 
    {
    	
    if (n < 10) 
	{
        return n;
    }
    
    return (n % 10) + sumOfDigits(n / 10);
}

int singleDigitSum(int n) 
    {
    int total = sumOfDigits(n);
    
    if (total < 10) 
	{
        return total;
    }

    return singleDigitSum(total);
}

int main() 
{
    int num;

    printf("Enter a number to calculate sum of digits: ");
    scanf("%d", &num);

    int result = singleDigitSum(num);
    printf("The sum of digits until a single digit is: %d\n", result);

    return 0;
}
