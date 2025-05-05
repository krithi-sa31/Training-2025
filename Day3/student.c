#include<stdio.h>
#define max_sub 10 
void calculateTotalMarks(int marks[][max_sub],int students, int subjects,int totalMarks[])
{
    for(int i=0;i<students;i++)
    {
        totalMarks[i]=0;
        for(int j=0;j<subjects;j++)
        {
            totalMarks+=marks[i][j];
        }
    }
}

void swap(int *first, int *second)
{
    int temp=(*first);
    (*first)=(*second);
    (*second)=temp;
}

void sortStudents(int totalMarks[], int students)
{
    int isSwapped=0;  /*initially not swapped so its false hence 0*/
    do
    {   
        isSwapped=0;
        for(int i=0;i< students-1;i++)
        {
            if (totalMarks[i]<totalMarks[i+1]) /*if the first marks is less than the second marks swap*/
            {
                swap(&totalMarks[i],&totalMarks[i+1]);
                isSwapped=1; /* it becomes swapped hence become 1*/
            }
        }
        students--;
    }while(isSwapped);
}

void readStudentMarks(int marks[][max_sub],int students,int subjects)
{
    printf("enter marks");
    for(int i=0;i<students;i++)
    {
        printf("student %d:",i+1);
        for(int j=0;j<subjects;j++)
        {
            scanf("%d",&marks[i][j]);
        }
    }
}

void printMarks(int totalMarks[],int students)
{
    for(int i=0;i<students;i++)
    {
        printf("total marks:%d\n",totalMarks[i]);
    }
}


int main()
{
    int students,subjects;
    int marks[100][max_sub];  /*since its a 2 d array add makrs and sub*/
    int totalMarks[100]={};  //check error
    printf("enter the number of students:");
    scanf("%d",&students);

    printf("enter the number of subjects:");
    scanf("%d",&subjects);

    readStudentMarks(marks,students,subjects);
    calculateTotalMarks(marks,students,subjects,totalMarks);
    sortStudents(totalMarks,students);
    printMarks(totalMarks,students);  /*in the bracket u add all the important paramenters that are needed to fulfill the function*/
    return 0;


}
