#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLENGTH 80

int main (void)
{
    char stra[MAXLENGTH];                   //first input
    char strb[MAXLENGTH];                   //second input  
    char strc[MAXLENGTH];                   //third input
    char temp[MAXLENGTH];                   //array for change word

    printf("Enter 3 words : ");
    scanf("%s%s%s", stra, strb, strc);

    if(strcmp(stra,strb)>0)                 //if stra is bigger than strb, strcmp get 1
    {
        strcpy(temp, stra);                 //save stra at temp
        strcpy(stra, strb);                 //put strb at stra
        strcpy(strb, temp);                 //put original stra at strb 
    }
    if(strcmp(stra,strc)>0)
    {
        strcpy(temp, stra);
        strcpy(stra, strc);
        strcpy(strc, temp);
    }
    if(strcmp(strb,strc)>0)
    {
        strcpy(temp, strb);
        strcpy(strb, strc);
        strcpy(strc, temp);
    }

    printf("In Dictionary Order : %s %s %s\n", stra, strb,strc);
    return 0;
}