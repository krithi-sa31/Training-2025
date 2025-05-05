#include<stdio.h>
struct shopping
{
    int id,amount;
    char name[100],product[100];
};

typedef struct shopping shop;

void saveFile(shop orders[],int n);
void searchOrder(shop orders[],int n,int searchID);

int main()
{
    int n,searchID;
    shop orders[100];
    printf("enter the number of orders:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("order %d:",i+1);
        scanf("%d%s%s%d",&orders[i].id,orders[i].name,orders[i].product,&orders[i].amount);
    }

    saveFile( orders, n);

    printf("enter order ID to search:");
    scanf("%d",&searchID);
    searchOrder(orders,n,searchID);
}

void saveFile(shop orders[],int n)
{
    FILE* file=fopen("orders.txt","w");
    if(file==NULL)
    {
        printf("errors");
        return;
    }
    for(int i=0;i<n;i++)
    {
        fprintf(file,"%d %s %s %d\n",orders[i].id,orders[i].name,orders[i].product,orders[i].amount);
    }
    fclose(file);
    printf("record saved in orders.txt\n");

}

void searchOrder(shop orders[],int n,int searchID)
{
    for(int i=0;i<n;i++)
    {
        if(orders[i].id==searchID)
        {
            printf("Order found: %s-%s-%d",orders[i].name,orders[i].product,orders[i].amount);
            return;
        }
    }
}
