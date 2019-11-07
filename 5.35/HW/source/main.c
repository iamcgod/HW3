#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int x)
{
	unsigned long long int fib[90];
	fib[0] = 0;
	fib[1] = 1;
	fib[2] = 1;
	if (x == 0)
		return fib[0];
	else if (x == 1 || x == 2)
		return fib[1];
	else if(x>=3&&x<=85)
	{
		for (int i = 3; i <= x; i++)
		{
			fib[i] = fib[i - 1] + fib[i - 2];
		}
		return fib[x];
	}
}
int main(void)
{
	unsigned int a;
	
	printf("Enter the number:");
	scanf_s("%u", &a);
	if (a <= 85)
		printf("The Fibonacci number is: %llu\n", fibonacci(a));
	else
		printf("This is unavailible\n");
	system("pause");
	return 0;
}