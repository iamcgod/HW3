#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char a, char b, char c) {
	if (n == 1) 
	{
		printf("Move sheet from %c to %c\n", a, c);
	}
	else 
	{
		hanoi(n - 1, 'A', 'C', 'B');
		hanoi(1, 'A', 'B', 'C');
		hanoi(n - 1, 'B', 'A', 'C');
	}
}

int main(void)
{
	int n;
	printf("�п�J�L�ơG");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}
