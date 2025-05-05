//student record

#include<stdio.h>
struct record
{
    int rollno,marks;
    char name[100],course[100];
};

typedef struct record rec;

void searchStudent(rec students[],int n,int rollno);
void saveFile(rec students[],int n);

int main()
{
    rec students[100];
    int n,rollno;
    printf("enter the number of students:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Student %d:",i+1);
        scanf("%d%s%s%d",&students[i].rollno,students[i].name,students[i].course,&students[i].marks);
    }   
    
    printf("enter roll no to search:");
    scanf("%d",&rollno);

    saveFile(students,n);
    searchStudent(students,n,rollno);
    return 0;
}

void searchStudent(rec students[],int n,int rollno)
{
    for(int i=0;i<n;i++)
    {
        if(students[i].rollno==rollno)
        {
            printf("Student found:%s, %s, Marks:%d",students[i].name,students[i].course,students[i].marks);
            return;
        }
    }

}

void saveFile(rec students[],int n)
{
    FILE *file = fopen("student.txt","w"); /*open the file and print whatever present to that file*/
    if (file == NULL)
    {
        printf("error");
    }
    for (int i=0;i<n;i++)
    {
        fprintf(file,"%s, %s, %d",students[i].name,students[i].course,students[i].marks);
    }
    fclose(file);
    printf("Record saved in students.txt\n");
}
