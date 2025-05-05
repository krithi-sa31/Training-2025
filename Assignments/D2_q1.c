#include<stdio.h>
#include<string.h>
void insuranceCoverage(int age,int salary, char option[])
{
    if (age>=18 && age<=60 && strcmp(option,"no") == 0 && salary>=25000 )
    {
        printf("eligible for insurance");
    }
    else
    {
        printf("not eligible for insurance");
    }

}

int main()
{
    int age,salary;
    char option[100];
    printf("enter age:");
    scanf("%d",&age);

    printf("Any pre-existing health condition?(yes/no):");
    scanf("%s",option);

    printf("enter monthly salary:");
    scanf("%d",&salary);

    insuranceCoverage(age,salary,option);

    return 0;
}
