#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 3
#define m 2
#define MAX 50

void GenRandSeed()
{
	// generating the random number using the time seed
	srand((unsigned int)(time(NULL)));
	return;
}

// generating the random number
unsigned int GenRandNum()
{	
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % MAX); //set random number between 0~100
	return nRes;
}

void getRanNumArr1(int(*parr)[m], int x, int y) 
{

    for (int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            parr[i][j] = GenRandNum(); //put random number on array
            printf("%d\t", parr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void getRanNumArr2(int(*parr)[n], int x, int y) 
{

    for (int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            parr[i][j] = GenRandNum();
            printf("%d\t", parr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int getMulArr(int(*parr1)[m], int(*parr2)[n], int x, int y) // multifly matrix
{
    for(int i =0; i<x; i++)
    {
        for(int j = 0; j<x; j++)
        {
            int res =0;
            for (int h =0; h<y; h++)
            {
                res += (parr1[i][h]) * (parr2[h][j]); //get one result on a cell
            }
            printf("%d\t", res); //print 3x3 matrix
        }
        printf("\n");
    }
    return 0;
}

int main(void)
{
    int ranArr1[n][m], ranArr2[m][n], **pArr1, **pArr2;
    int res;

    GenRandSeed();

    getRanNumArr1(ranArr1, n, m);
    getRanNumArr2(ranArr2, m, n);

    getMulArr(ranArr1, ranArr2, n, m);
    
}