#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLENGTH 80

int main (void)
{
    char stra[MAXLENGTH];
    char strb[MAXLENGTH];
    char strc[MAXLENGTH];
    char temp[MAXLENGTH];

    printf("Enter 3 words : ");
    scanf("%s%s%s", stra, strb, strc);

    if(strcmp(stra,strb)>0)
    {
        strcpy(temp, stra);
        strcpy(stra, strb);
        strcpy(strb, temp);
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