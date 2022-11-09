#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80] = {};
	char strb[10] = "apple";
	const char* strc = "pear";
	strcpy(str, "wine");
	strcat(str, strb);
	strncpy(str, strc, 1);
	printf("%s, %d\n", str, strlen(str));
	return 0;	
}