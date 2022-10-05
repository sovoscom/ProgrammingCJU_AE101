#include <stdio.h>

int rec_func(int n)
{
    if (n==1)
        return 1;
    else 
        return n + rec_func(n-1);
}

int main(void)
{
    int num;
    int res = 0;    
    printf("Enter number: ");
    scanf("%d", &num);
    res = rec_func(num);
    printf("num = %d\n", res);
    return 0;
}