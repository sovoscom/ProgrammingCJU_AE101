#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80] = {};
	char strb[10] = "apple";
	const char* strc = "pear";
	strcpy_s(str, sizeof(str), "wine");
	strcat_s(str, sizeof(strb), strb);
	printf("%s, %d\n", str, strlen(str));
	strncpy_s(str, sizeof(str), strc, 1);
	printf("%s, %d\n", str, strlen(str));
	return 0;	
}