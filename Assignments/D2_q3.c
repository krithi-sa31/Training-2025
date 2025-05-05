#include<stdio.h>
float balance=10000.0;
void atmTransaction(int choice)
{
    float amount;
    switch(choice)
    {
        case 1: printf("Enter amount:");
        scanf("%f",&amount);
        if (amount>balance)
        {
            printf("Low balance, cannot withdraw\n");
        }
        else
        {
            balance-=amount;
            printf("Transaction Successful. Remaining balance:%0.2f\n",balance);
        }
        break;

        case 2:
        printf("Enter Amount to deposit:");
        scanf("%f",&amount);

        balance+=amount;
        printf("Updated balance:%0.2f",balance);
        break;

        case 3:
        printf("Balance:%0.2f",balance);
        break;

        case 4:printf("exiting");
        break;

        default:printf("invalid choice");
        break;
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("Enter your choice:\n 1.Withdraw Money\n 2.Deposit Money\n 3.Check balance\n");
        printf("Choice:");
        scanf("%d",&choice);
        atmTransaction(choice);

        if (choice==4)
        {
            break;
        }
    }

    return 0;
}
