#include <stdio.h>
#include <stdlib.h>

float power(float x, int y)
{
	if (y == 1)
	{
		return x;
	}
	else
	{
		return (x*power(x, y - 1));
	}
}
int main(void)
{
	float a;
	int b;
	printf("Enter the base and exponent:");
	scanf_s("%f %d", &a, &b);
	printf("The answer is: %.2f\n", power(a, b));
	system("pause");
	return 0;
}