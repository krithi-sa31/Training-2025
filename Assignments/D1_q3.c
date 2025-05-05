#include<stdio.h>
int main()
{
    int n, marks;
    printf("Enter the number of students:");
    scanf("%d",&n);
    printf("Enter marks:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks);
        printf("Student %d:",i+1); //print student number

        if(marks>90)
        {
            printf("Grade A\n");
        }
        else if(marks>80)
        {
            printf("Grade B\n");
        }
        else if(marks>70)
        {
            printf("Grade C\n");
        }
        else if(marks>60)
        {
            printf("Grade D\n");
        }
        else
        {
            printf("Grade F\n");
        }
    }
}
