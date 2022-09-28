#include <stdio.h>

int main(void)
{
	int chest;
	char size;
	printf("Enter your chset size: ");
	scanf_s("%d", &chest);
	if (chest <= 90)
	{
		size = 'S';
	}
	else if (chest > 90 && chest <= 100)
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf("Your size is %c\n", size);

	return 0;
}