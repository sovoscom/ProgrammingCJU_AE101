#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ranLength 9 //give limit on array random length

// generating the seed number using the time clock information
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
	nRes = ((unsigned int)(nNum) % (ranLength)+1); //set random number between 1~10
	return nRes;
}

//use pointer to change number on array
void changeNum(int*pArr, int x) 
{
    int temp = 0;
    temp = pArr[x];
    pArr[x] = pArr[x+1];
    pArr[x+1] = temp;
}

void getAscendingArr(int*pArr, int size)
{
    for(int j=0; j<size; j++)
    {
        for(int h=0; h<size-j-1; h++) //arranging number small to large
        {
            if(pArr[h]>pArr[h+1])
            {
                changeNum(pArr, h);
            }
        }
        
    }

    printf("The ascending array is : ");
    for(int k =0; k<size; k++)
    {
        printf("%3d", pArr[k]);
    }
    printf("\n");
}

void getDecendingArr(int*pArr, int size)
{

    for(int j=0; j<size; j++)
    {
        for(int h=0; h<size-j-1; h++) //arranging number large to small
        {
            if(pArr[h]<pArr[h+1])
            {
                changeNum(pArr, h);
            }
        }
        
    }

    printf("The decending array is : ");
    for(int k =0; k<size; k++)
    {
        printf("%3d", pArr[k]);
    }
    printf("\n");
}

int main(void)
{
    GenRandSeed();

    int length = 0;
    length = GenRandNum(); //get random length of array
    int iptArr[length];

    printf("Enter the %d number: ", length);
    for(int i = 0; i<length; i++)
    {
        scanf("%d", &iptArr[i]);
    }

    getAscendingArr(iptArr, length);
    getDecendingArr(iptArr, length);

    return 0;

}