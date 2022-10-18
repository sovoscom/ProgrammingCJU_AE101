#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>


#define MAX 100

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
	nRes = ((unsigned int)(nNum) % (MAX)); //set random number between 0~100
	return nRes;
}

void calAvg(int *pArr, int size) //calculate average
{
	int total = 0;
	double Avg = 0;

	for(int i=0; i<size; i++)
	{
		total += pArr[i];
	}

	Avg = total / size;
	printf("Average is %.2lf\n", Avg);
}

void calVar_stdDev(int *pArr, int size)
{
	int total = 0;
	double avg, var, std_Dev = 0;
	
	for(int i=0; i<size; i++)
	{
		total += pArr[i];
	}
	avg = total / size;
	for (int j=0; j<size; j++)
	{
		var += pow(pArr[j] - avg, 2); //use pow to calculate var^2
	}
	var = var / size;
	std_Dev = sqrt(var); 
	
	//printf("Average is %.2lf\n", avg);
	printf("Variance is %.2lf\nStandard deviation is %.2lf\n", var, std_Dev);
}

int main(void)
{
	GenRandSeed();

	int calArr[MAX], arrLength;
	double avg, val, standDeviat;


	printf("Enter the length of Array: ");
	scanf("%d", &arrLength);

	if(arrLength > 100)
	{
		printf("Error: Please enter lower than 100\n");
		return 0;
	}
	else if (isdigit(arrLength) == '\0')
	{
		printf("Error: Please enter number\n");
		return 0;
	}

	for (int i = 0; i<arrLength; i++) //get random array number
	{
		calArr[i] = GenRandNum(); 
	}
	/* check random number set on array correctly
	for(int j =0; j<arrLength; j++)
	{
		printf("%5d", calArr[j]);
	}
	printf("\n");
	*/

	calAvg(calArr, arrLength);

	calVar_stdDev(calArr, arrLength);

	return 0;
}