#include <stdio.h>
#include <stdlib.h>

#define MAXNAMELENGTH 80
#define MAXMEMBER 5
#define MAXSUBJECT 3

typedef struct student{
    int student_id;
    char name[MAXNAMELENGTH];
    int kor;
    int eng;
    int mat;
    int total;
    float avg;
    char grade;
} Student;

void print_struct(Student* info)
{
    for(int i = 0; i < 5; i++)
    {
        printf("%5d %5s%5d%5d%5d%5d%5.1lf%5c\n",
            (info + i)->student_id, (info + i)->name, (info + i)->kor, 
            (info + i)->eng, (info + i)->mat, (info + i)->total,(info + i)->avg, (info + i)->grade);
    }
}

void calScore(Student*score)
{
    for(int i = 0; i<MAXMEMBER; i++)
    {
        score->total = score->kor + score->eng + score->mat;
        score->avg = (float)score->total / MAXSUBJECT;          //casting int -> float to get exact avg value

        if((score->avg)>=90.0) score->grade = 'A';
        else if((score->avg)>=80.0&&(score->avg)<90.0) score->grade = 'B';
        else if((score->avg)>=70.0&&(score->avg)<80.0) score->grade = 'C';
        else score->grade = 'F';
        score++;

    }
}

void asending_List(Student* info)
{
    Student temp;
    int highest;

    for(int i = 0; i<MAXMEMBER-1; i++)
    {
        for(int j = 0; i<MAXMEMBER-i-1; j++)
        {
            if(info[j].total<info[j+1].total) 
            {
                temp = info[j];
                info[j] = info[j+1];
                info[j+1] = temp;
            }
        }
    }
     
    for(int i = 0; i < 5; i++)
    {
        printf("%5d %5s%5d%5d%5d%5d%5.1lf%5c\n",
            (info + i)->student_id, (info + i)->name, (info + i)->kor, 
            (info + i)->eng, (info + i)->mat, (info + i)->total,(info + i)->avg, (info + i)->grade);
    }

}

int main(void)
{
    Student list[MAXMEMBER] = {0};

    for(int i = 0; i < MAXMEMBER; i++)
    {
        printf("Enter Student id : ");
        scanf("%d", &list[i].student_id);
        printf("Enter Student name : ");
        scanf("%s", list[i].name);
        printf("Enter Student score (ex: 90 90 90) : ");
        scanf("%d%d%d", &list[i].kor, &list[i].eng, &list[i].mat);
    }

    calScore(list);

    printf("#Before sort...\n");
    print_struct(list);

    printf("#After sort...\n");
    asending_List(list);
    
}