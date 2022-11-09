#include <stdio.h>
#include <string.h>

int main(void)
{
	char str_output[80];
	char str_input[80];
	const char *str_star = "***************";
	printf("Enter the word: ");
	scanf_s("%s", str_input, 15);
	int len = strlen(str_input);

	if (len < 5)
	{		
		strcpy_s(str_output, sizeof(str_output), str_input);
		printf("Input word:%s, Changed word: %s", str_output);
	}
	else
	{
		strcpy_s(str_output, sizeof(str_output), str_input);
		str_output[5] = '\0';
		strncat_s(str_output, sizeof(str_output), str_star, len - 5);
		printf("Input word:%s, Changed word: %s", str_input, str_output);
	}
	
	return 0;
}