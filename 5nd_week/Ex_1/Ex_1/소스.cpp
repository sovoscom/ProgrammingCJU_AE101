#include <stdio.h>

int main(void)
{
	int i, j;

	printf("input your value: ");
	scanf_s("%d", &i);

	if (i <= 10 && i >= 2)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i*j);
		}
	}
	else
	{
		printf("Error: Enter number less than 10 more than 2");
	}

	return 0;
}