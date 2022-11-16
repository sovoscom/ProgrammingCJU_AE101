#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int getNumber = 0;
	int* ptrprimeNumber;
	int i;
	char x = 'X';

	printf("Enter positive number : ");
	scanf("%d", &getNumber);
	ptrprimeNumber = (int*)malloc((getNumber - 1) * sizeof(int));

	if (ptrprimeNumber == NULL)										//get exception for over heap allocation
	{
		printf("lack of memories");
		exit(1);
	}
	for (i = 0; i < (getNumber - 1); i++)							//put number on array using index number
	{
		ptrprimeNumber[i] = i+2;									//prime numbers don't include 1 starting 2
	}
	i = 0;
	while (1)
	{
		while ((ptrprimeNumber[i] == 0) && (i < (getNumber - 2)))	//if integer i reach number which become 0, pass the number 
		{
			 i++;
		}
		if (i == (getNumber - 2)) break;							//break infinite while loop when reach last number

		for (int j = i + 1; j < getNumber - 1; j++)					//this number will divide by all of number on i
		{
			if ((ptrprimeNumber[j] % ptrprimeNumber[i]) == 0)		//if number can be divide by into number that on i
			{ 
				ptrprimeNumber[j] = 0;								//index j number become 0
			}
		}
		i++;														//after for loop i get +1
	}
	for (i = 0; i < (getNumber - 2); i++)
	{
		if (ptrprimeNumber[i] != 0)									//if index i number stay at the number
		{
			printf("%5d", ptrprimeNumber[i]);						//print itself
		}
		else
		{
			printf("%5c", x);										//doesn't
		}
		if ((i + 1) % 5 == 0) printf("\n");							//print X
	}
	free(ptrprimeNumber);											//free malloc number

	return 0;

}