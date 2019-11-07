#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a, b;
	printf("Enter an alphabet:");
	scanf_s("%c", &a);
	if (a >= 65 && a <= 90)
	{
		b = a + 32;
		printf("Change case: %c\n", b);
	}
	else if (a >= 97 && a <= 122)
	{
		b = a - 32;
		printf_s("Change case: %c\n", b);
	}
	system("pause");
	return 0;
}