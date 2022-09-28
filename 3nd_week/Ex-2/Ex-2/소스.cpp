#include <stdio.h>

int main(void)
{
	int age, chest;
	char size;

	printf("Enter your age and chest size : ");
	scanf_s(" %d%d", &age, &chest);

	if (age < 20)
	{
		if (chest < 85)
		{
			size = 'S';
		}
		else if (chest >= 85 && chest < 95)
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
	else
	{
		if (chest < 90)
		{
			size = 'S';
		}
		else if (chest >= 90 && chest < 100)
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
	
	printf("Your size is %c\n", size);

	return 0;
}