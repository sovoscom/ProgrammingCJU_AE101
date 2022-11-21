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

//print all structure 
void print_struct(Student* info)
{
    for(int i = 0; i < 5; i++)
    {
        printf("%5d %5s%5d%5d%5d%5d%6.1lf%5c\n",
            (info + i)->student_id, (info + i)->name, (info + i)->kor, 
            (info + i)->eng, (info + i)->mat, (info + i)->total,(info + i)->avg, (info + i)->grade);
    }
}

//calculate total, average score and grade 
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

//arrange student list by total score
void asending_List(Student* info)
{
    Student temp;                               //casting temp to put info temporarily

    for(int i = MAXMEMBER-1; i>0; i--)          //use bubble sort to arrange list to asending order
    {
        for(int j = 0; j<i; j++)
        {
            if(info[j].total<info[j+1].total)   //compare total score
            {
                temp = info[j];                 // changing order
                info[j] = info[j+1];
                info[j+1] = temp;
            }   
        }
    }
     
    for(int i = 0; i < 5; i++)
    {
        printf("%5d %5s%5d%5d%5d%5d%6.1lf%5c\n",
            (info + i)->student_id, (info + i)->name, (info + i)->kor, 
            (info + i)->eng, (info + i)->mat, (info + i)->total,(info + i)->avg, (info + i)->grade);
    }

}

int main(void)
{
    Student list[MAXMEMBER] = {0};

    //enter info about students
    for(int i = 0; i < MAXMEMBER; i++)
    {
        printf("Enter Student Id : ");
        scanf("%d", &list[i].student_id);
        printf("Enter Student name : ");
        scanf("%s", list[i].name);
        getchar();
        printf("Enter Student score (ex: 90 90 90) : ");
        scanf("%d%d%d", &list[i].kor, &list[i].eng, &list[i].mat);
    }

    calScore(list);

    printf("#Before sort...\n");
    print_struct(list);

    printf("#After sort...\n");
    asending_List(list);
    
}