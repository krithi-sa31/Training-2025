#include<stdio.h>
int main()
{
    int n,total_bill=0,type;

    printf("Enter the number of vehicles:");
    scanf("%d",&n);

    printf("Enter vehicle types:(1-car, 2-truck, 3-bike, 4-bus )");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&type);
        switch(type)
        {
            case 1: total_bill+=50;
            break;

            case 2: total_bill+=100;
            break;

            case 3: total_bill+=20;
            break;

            case 4:total_bill+=80;
            break;

            default: printf("invalid vehicle type\n");
        }
    }
    printf("Total Toll Tax:Rs.%d",total_bill);
    return 0;
    
}
