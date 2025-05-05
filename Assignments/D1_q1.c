#include<stdio.h>
int main()
{
    int n,salary,low_income=0,middle_income=0,high_income=0;//counts the employees earning low,middle and high salaries
    printf("Enter the number of employees:");
    scanf("%d",&n);
    printf("Enter salaries:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&salary);
    
        if(salary<30000)
        {
            low_income++; //if salary is below 30000, count increments
        }
        else if(salary<=70000)
        {
            middle_income++;
        }
        else
        {
            high_income++;
        }
    }

    printf("Low income:%d\n",low_income);
    printf("Middle income:%d\n",middle_income);
    printf("High income:%d\n",high_income);

    return 0;
}
