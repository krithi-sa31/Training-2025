#include<stdio.h>
struct Employee_t
{
    int id;
    char name[100], dept[100];
    float salary;
};

typedef struct Employee_t Employee;

void readEmployees(Employee emp[], int n);
void displayEmployees(Employee emp[], int n); // function declaration
Employee findHighestSalaried(Employee emp[], int n);

int main()
{
    int empcount;
    printf("enterr the number of employees:");
    scanf("%d", &empcount);

    Employee employees[1000]; // creating an array for employees
    readEmployees(employees,empcount);
    displayEmployees(employees,empcount);
    Employee highestSalaried = findHighestSalaried(employees,empcount);
    printf("employee with highest salary: %s, %.2f( %s)\n", highestSalaried.name, highestSalaried.salary, highestSalaried.dept);
    return 0;
}

void readEmployees(Employee emp[], int n)
{
    printf("Enter details(ID, name, salary,department):");
    for (int i = 0; i < n; i++)
    {
        scanf("%d%s%f%s", &emp[i].id, emp[i].name, &emp[i].salary, emp[i].dept);
    }
}

void displayEmployees(Employee emp[], int n)
{
    printf("Employees:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d - %s %.2f %s\n", emp[i].id, emp[i].name, emp[i].salary, emp[i].dept);
    }
}

Employee findHighestSalaried(Employee emp[], int n)
{
    Employee maxSalary = emp[0];
    for (int i = 1; i <= n; i++)
    {
        if (emp[i].salary > maxSalary.salary)
        {
            maxSalary = emp[i];
        }
    }
    return maxSalary;
}
