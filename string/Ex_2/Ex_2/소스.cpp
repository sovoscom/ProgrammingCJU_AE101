#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char title[80];
	char author[20];
	int page;
	int price;
} Book ;

void print_list(Book* info)
{
	for (int i = 0; i < 3; i++) //make repeat print 'i'times to print all struct on list 
	{
		//print title, author, page, price and turn to next row
		printf("%20s%15s%10d%10d\n",
			(info + i)->title, (info + i)->author, (info + i)->page, (info + i)->price); //use -> to give code what to print
	}
}

int main(void)
{	
	//make struct list by following order(title, author, page, price)
	Book list[3] =
	{
		{"ȥ�� �����ϴ� C���", "������", 636, 24000},
		{ "������ ������", "��ȣ��", 267, 14000 },
		{ "������ ����", "����Ŭ ������", 264, 17000 }
	};

	print_list(list);
}