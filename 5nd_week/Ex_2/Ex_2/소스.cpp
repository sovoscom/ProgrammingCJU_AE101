#include <stdio.h>

int prime_number(int x)
{
	int i, pri, cnt=2;
	int num_cnt=0;

	while(cnt<x)
	{
		pri = 1;
		for (i = 2; i < cnt; i++) 
		{

			if (cnt % i == 0)
			{
				pri = 0;
				break; //for문 탈출 후 cnt++후 다시 while로 시작
			}
		}
		if (pri == 1)
		{
			printf("%d ", cnt);
			num_cnt++;
			if (num_cnt % 5 == 0) printf("\n"); //num_cnt가 출력값을 세주고 5개마다 줄넘김 사용
		}
		cnt++;
	
	}
	

	return cnt;
}

int main(void)
{
	int num1=0;

	printf("Enter number at least 2: ");
	scanf_s("%d", &num1);
	if (num1 > 2)
	{
		prime_number(num1);
	}
	else
	{
		printf("Error: Enter number at least 2"); 
	}
	
	return 0;
}