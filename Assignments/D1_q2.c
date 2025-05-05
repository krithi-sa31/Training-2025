#include<stdio.h>
int main()
{
    int units;
    printf("enter the units consumed:");
    scanf("%d",&units);

    float total_bill=0.0f;
    if(units>100)
    {
        total_bill+=(100.0f * 2.0f); // first 100 units * rs.2
    }
    else
    {
        total_bill+=(units*2.0f);
    }

    if(units>200)
    {
        total_bill+=(100.0f * 3.0f); //next 100 units * rs.3
    }
    else if(units>=100 && units<200)
    {
        total_bill+=((units-100.0f)*3.0f);
    }

    if (units>200)
    {
        total_bill+=((units-200.0f) * 5.0f); //above 200 units * rs.5
    }

    printf("Total Bill=%0.2f\n",total_bill);

    return 0;
}
