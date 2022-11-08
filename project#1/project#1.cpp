#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRANGE 97
#define MAXCHANCE 7

// generating the seed number using the time clock information
void GenRandSeed()
{
	// generating the random number using the time seed
	srand((unsigned int)(time(NULL)));
	return;
}

// generating the random number
unsigned int GenRandNum(unsigned int nRange)
{
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % (nRange)) + 3;                       //get random number at least 3
	return nRes;
}

int game_counter(int game_count)
{
    game_count++;                                                       //show how many times game execute
    printf("\tYour number of attempts: %d\n",game_count);
    return game_count;
}

int input_number(void)
{   
    int user_input = 0;
    printf("\tEnter the number: ");
    fflush(stdin);                                                      //empty input buffer
    scanf("%d", &user_input);
    return user_input;
}

int wrong(int answer, int user_input, int count)
{
    printf("\t\tWrong\n");
    count--;
    answer < user_input ? printf("\t\tDOWN!!\n") : printf("\t\tUP!!\n");    //use ? instead if
    return count;
}

void hintNend(int count, int answer)
{
    if(count==2)
    {
        (answer%2==0) ? printf("\tanswer is even number\n") : printf("\tanswer is odd number\n");
    }

    if(count==0) printf("\tGame Over\n\tanswer is %d\n", answer);
}

int main(void)
{
    int answer = 0;     //answer of game
    int user_input = 0; //number that user puts
    int count = 0;      //show number of chance that left
    int game_count =0;  //show number of game until first clear/end the game
    char retry = 0;     //variable that asking retry

    //starting the game loop
    while(1)
    {
        GenRandSeed();

        answer = GenRandNum(MAXRANGE); //get random number 3 to 100
        count = GenRandNum(MAXCHANCE); //get random number 3 to 10

        printf("======================UP&DOWN======================\n\n"); //starting mention
        
        while (count)                                       //make while loop until break
        {
            printf("\tLEFT LIFE: %d\n", count);             //show count number 
            user_input = input_number();                    //input number

            if(answer == user_input)                        //when input is correct
            {
                printf("\t\tCorrect\n");
                break;
            }
            else if ((user_input>100)||(user_input<1))      //user_input exception
            {
                printf("\n\tPlease enter number between 1 to 100\n");
                continue;
            }
            else                                            //when input is wrong
            {
                count = wrong(answer, user_input, count);   //print up and down, get count number 
            }
            hintNend(count, answer);                        //give hint when left life is 2            
        }           
        
        game_count++;
        printf("\tTry again? (y/n):  ");                    //asking to do program again
        fflush(stdin);
        scanf("%c", &retry);

        if(retry == 'y')                                    //give new chance to play again
        {
            count = GenRandNum(MAXCHANCE);                  //give random number again
            game_counter(game_count);
            continue;
        }
        else if(retry == 'n')
        {
            game_counter(game_count);
            printf("\t\tThe End\n");
            printf("===================================================\n\n");
            break;                                          //break infinite while loop and end the code
        }
        else
        {
            game_counter(game_count);
            printf("\tSelect between yes or no\n");
            printf("\t\tThe End\n");
            printf("===================================================\n\n");
            break;
        }

        system("pause");                                    //prevent program form immediate closing        
    }
}