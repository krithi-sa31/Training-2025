#include<stdio.h>
void inputmarks(int *marks, int n)
{
    printf("enter marks");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
}

float calculateaverage(int *marks, int n)
{
   float average;
   int sum=0;
   for(int i=0;i<n;i++)
   {
    sum+=marks[i];
   }
   average=(float)sum/(float)n; //use (float) bcz sum and n are initially int
   return average;

}

int main()
{
    int n,marks[1000];
    printf("enter the number of students:");
    scanf("%d",&n);
    inputmarks(marks,n);
    float average=calculateaverage(marks,n);
    printf("average marks:%0.2f",average);
    return 0;
}
