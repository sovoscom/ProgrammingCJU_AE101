#include <stdio.h>

#define digit_4 4
#define max_Try 5

int compare_Pw(int a[], int b[])
{
    int correct_Cnt = 0; 
    for(int i=0; i<digit_4; i++)
    {
        if(a[i] != b[i]) //if number doesn't match
        {
            //printf("%d, %d\n", a[i], b[i]); check scanf working correctly
            continue;
        }
        else 
        {
            //printf("%d, %d\n", a[i], b[i]); 
            correct_Cnt++; //count number of correct password
            continue;
        }
    }
    //printf("matched number : %d\n", h); show how many number matched with password
    if (correct_Cnt != digit_4) 
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main (void)
{
    int correct_Pw[digit_4] = {5,9,2,6};
    int input_Pw[digit_4];

    for(int i=0; i<max_Try; i++) 
    {
        printf("Please Enter the 4_digit password\n");

        for(int j=0; j<digit_4; j++)
        {
            scanf("%d", &input_Pw[j]);
        }

        if(compare_Pw(input_Pw, correct_Pw) == 1) 
        {
            printf("normal termination..\n\n");
            break;
        }
        else 
        {
            printf("not matched, retry..\nYou have %d more tries\n\n", max_Try-(i+1)); //show remaining attempts
            continue;
        }


    }
}

