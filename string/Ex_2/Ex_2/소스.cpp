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
		{"혼자 공부하는 C언어", "서현우", 636, 24000},
		{ "불편한 편의점", "김호연", 267, 14000 },
		{ "수학의 위로", "마이클 프레임", 264, 17000 }
	};

	print_list(list);
}