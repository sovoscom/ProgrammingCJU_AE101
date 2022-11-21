#include <stdio.h>
#include <string.h>

#define MAX 500

int main(void)
{
    FILE* file = fopen("untitle.txt","w");

    fputs("4\n",file);                      //input integer
    fputs("3.5\n",file);                    //input float
    fputs("E\n",file);                      //input string
    fputs("string\n",file);                 //input strings
    fclose(file);

    file = fopen("untitle.txt", "r");
    
    char buffer[MAX] = {0, };

    fread(buffer, 1 ,MAX, file);            //read whole file
    printf("%s", buffer);                   //print buffer array
    fclose(file);
}