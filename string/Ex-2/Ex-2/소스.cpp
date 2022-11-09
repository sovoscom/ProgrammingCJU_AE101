#include <stdio.h>
#include <string.h>

int main(void)
{
	char str_output[80];
	char str_input[80];
	const char *str_star = "***************";
	printf("Enter the word: ");
	//scanf_s("%s", str_input, 15);
	scanf("%s", str_input);
	int len = strlen(str_input); 								//get length of str_input

	if (len < 5)
	{		
		//strcpy_s(str_output, sizeof(str_output), str_input);  //when using visual stdio
		strcpy(str_output, str_input);							//string copy input to output
		printf("Input word:%s, Changed word: %s", str_output);  //print all input(under 4 letters)
	}
	else if (len > 15) 
	{
		printf("Enter the word that under 15 characters");      //exception(over 15words)
	}
	else
	{
		//strcpy_s(str_output, sizeof(str_output), str_input);
		strcpy(str_output,str_input);
		str_output[5] = '\0';									//empty 5rd place to change to *
		//strncat_s(str_output, sizeof(str_output), str_star, len - 5);
		strncat(str_output, str_star, len - 5);					//add * rest of characters
		printf("Input word:%s, Changed word: %s\n", str_input, str_output);
	}
	
	return 0;
}