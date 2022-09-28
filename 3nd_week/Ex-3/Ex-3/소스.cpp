#include <stdio.h>

int main(void)
{
	char cal;
	int num1, num2, res;
	printf("Input your authemetic operation: ");
	scanf_s("%d %c", &num1, &cal);
	scanf_s("%d", &num2);
	if (cal == '+') 
	{
		res = num1 + num2;
	}
	else if (cal == '-')
	{
		res = num1 - num2;
	}
	else if (cal == '*')
	{
		res = num1 * num2;
	}
	else
	{
		res = num1 / num2;
	}

	/*switch (cal)    using switch
	{
	case '+':
		res = num1 + num2;
		break;
	case '-':
		res = num1 - num2;
		break;
	case '*':
		res = num1 * num2;
		break;
	default:
		res = num1 / num2;
		break;
	}*/
	printf("%d %c %d = %d", num1, cal, num2, res);

	return 0;
}