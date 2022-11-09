#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 80

int main(void)
{
	char strFilePath[MAX] = "C:\\Document\\Github\\Test1\\test1.txt";
	char strFileName[MAX] = "test2.txt";
	char *context = NULL;
	char *token = strtok_s(strFilePath, "\\", &context);
	char* ptrSplitEl[MAX] = { NULL, };
	char* ptrEl[MAX] = { NULL, };
	int count = 0;

	while (token != NULL)
	{
		ptrSplitEl[count] = token;
		count++;
		token = strtok_s(NULL, "\\", &context);
		printf("%s\n", token);
		
	}
	for (int i = 0; i < count; i++)
	{
		printf("%s\n", ptrSplitEl[i]);
	}
	ptrSplitEl[4] = strFileName;
	printf("%s\n", ptrSplitEl[4]);
	
	for (int i = 0; ptrSplitEl[i]=='\0'; i++)
	{
		strcat_s(ptrSplitEl[i], sizeof(ptrSplitEl), "\\");
	}
	for (int i = 0; i < count; i++)
	{
		printf("%s\n", ptrSplitEl[i]);
	}
	
}