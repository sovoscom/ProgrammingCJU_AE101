#include <stdlib.h>
#include <stdio.h>



int main(void)
{
    char ch;

    printf("Input : \n");						  //asking number
    scanf_s("%c", &ch);							  //input number
    printf("%c's Ascii code is : %d\n", ch, ch);  //outcome

    return 0;

};