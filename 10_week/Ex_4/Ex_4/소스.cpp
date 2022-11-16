#include <stdio.h>

typedef struct {
	char name[20];
	int age;
	char sex;
	double height;
} marriage;

int main(void)
{
	marriage m1 = { "Andy", 22, 'm', 187.5 };	//put info on struct 
	marriage *mp = &m1;							//put m1 on pointer
	printf("Name : %s\n", mp -> name);			//print pointer info using '->'
	printf("age : %d\n", mp -> age);
	printf("sex : %c\n", mp -> sex);
	printf("height : %.1lf\n", mp -> height);
	return 0;
}