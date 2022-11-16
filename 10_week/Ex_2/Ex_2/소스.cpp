#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char title[80];
	char author[30];
	int page;
	int price;
} Book ;

void print_list(Book* info)
{
	for (int i = 0; i < 3; i++) //make repeat print 'i'times to print all struct on list 
	{
		//print title, author, page, price and turn to next row
		printf("%20s%20s%10d%10d\n",
			(info + i)->title, (info + i)->author, 
			(info + i)->page, (info + i)->price); //use -> to give code what to print
	}
}

int main(void)
{	
	//make struct list by following order(title, author, page, price)
	Book list[3] = {0};
	
	for(int i =0; i<3; i++)												//repeat 3 times to fill 3 info on list
	{
		printf("Please enter book information by following orders\n"); 
		printf("Title : ");
		scanf("%[^\n]s", list[i].title);								//input struct title
		getchar();
		printf("Author : ");
		scanf("%s[^\n]", list[i].author);
		getchar();
		printf("Page : ");
		scanf("%d[^\n]", &list[i].page);								//input page using '&'
		getchar();
		printf("Price : ");
		scanf("%d[^\n]", &list[i].price);
		getchar();
		printf("\n");
	}
	

	print_list(list);
}