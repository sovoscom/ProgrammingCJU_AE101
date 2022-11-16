#include <stdio.h>

typedef struct {
	char name[20];
	int age;
	char sex;
	double height;
} marriage;

void print(marriage* mp)
{
	print("Name : %s\n", mp->name);
	print("age : %d\n", mp->age);
}

int main(void)
{
	marriage m1 = { "Andy", 22, 'm', 187.5 };
	print(&m1);
	return 0;
}