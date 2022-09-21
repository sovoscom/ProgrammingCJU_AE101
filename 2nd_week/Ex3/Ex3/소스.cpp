#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int kscore = 3, escore = 5, mscore = 4;
    int credits;
    int res;
    double kor = 3.8, eng = 4.4, mat = 3.9;
    double grade;


    credits = kscore + escore + mscore;
    grade = ((kor * kscore) + (eng * escore) + (mat * mscore));
    res = (credits >= 10 && grade > 4.0) ? 1 : 0;
    printf("%d", res);

    return 0;
};