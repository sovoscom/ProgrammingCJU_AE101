#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int price;
	int calories;
} cracker;

int main(void)
{
	cracker BaSaSak;
	printf("Enter price and calories of BaSaSak : ");
	scanf_s("%d%d", &BaSaSak.price, &BaSaSak.calories);
	printf("price of BaSaSak : \\%d \ncalories of BaSaSak : %dkcal", BaSaSak.price, BaSaSak.calories);
}