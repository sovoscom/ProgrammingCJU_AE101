#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int getNumber = 0;
	int* ptrprimeNumber;
	int i;
	char x = 'X';

	printf("Enter positive number : ");
	scanf_s("%d", &getNumber);
	ptrprimeNumber = (int*)malloc((getNumber - 1) * sizeof(int));

	if (ptrprimeNumber == NULL)
	{
		printf("lack of memories");
	}
	for (i = 0; i < (getNumber - 1); i++)
	{
		ptrprimeNumber[i] = i+2;
	}
	i = 0;
	while (1)
	{
		while ((ptrprimeNumber[i] == 0) && (i < (getNumber - 2))) i++;

		if (i == (getNumber - 2)) break;

		for (int j = i + 1; j < getNumber - 1; j++)
		{
			if ((ptrprimeNumber[j] % ptrprimeNumber[i]) == 0) ptrprimeNumber[j] == 0;
		}
		i++;
	}
	for (i = 0; i < (getNumber - 2); i++)
	{
		if (ptrprimeNumber[i] != 0)
		{
			printf("%5d", ptrprimeNumber[i]);
		}
		else
		{
			printf("%5c", x);
		}
		if ((i + 5) % 5 == 0) printf("\n");
	}
	free(ptrprimeNumber);

	return 0;

}