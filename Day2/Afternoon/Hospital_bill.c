#include<stdio.h>
float calculateBill(char wardtype, int days)
{
    float amount;
    float price;
    switch(wardtype)
    {
        case 'G': price= 1000.0f;
        break;

        case 'S': price=2000.0f;
        break;

        case 'P': price=5000.0f;
        break;

    }
    amount=price*days;

    if (days>7)
    {
        amount=amount*0.95f;
    }
    return amount;
}

int main()
{
    char name[50];
    char wardtype;
    int days;

    printf("enter the patient name:");
    scanf("%s",name); getchar();

    printf("enter the enter the wardtype(G/S/P):");
    scanf("%c",wardtype);

    printf("enter the number of days:");
    scanf("%d",&days);

    float amount =calculateBill(wardtype,days);

    printf("patient name:%s",name);
    printf("toal bill amount:%0.2f",amount);

    return 0;
}
