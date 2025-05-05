#include<stdio.h>
#include<string.h>
#define max_passengers 100
#define max_length 100
void sortPassengers(char name[][max_length],char loc[][max_length],int n)
{
    int i,j,tempAge;
    char tempName[max_length],tempLoc[max_length];
    for( i=0;i<n-1;i++)/*loop for the number of passengers*/
    {
        for( j=0;j<n-i-1;j++) /* use -i to subtract from theabove loop cause its already done*/
        {
            if(strcmp(loc[j],loc[j+1])>0) /*if it is >0, it means that they are out of order, hence swaps*/
            {
                strcpy(tempName,name[j]); /*swap names*/
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],tempName);

                strcpy(tempLoc,loc[j]); /*swap location*/
                strcpy(loc[j],loc[j+1]);
                strcpy(loc[j+1],tempLoc);

            }
        }
    }
}

void search(char name[][max_length],char loc[][max_length],int n,char searchLoc[])
{
    int found=0;
    printf("passenger travelling to %s:\n",searchLoc);
    for(int i=0;i<n;i++)
    {
        if(strcmp(loc[i],searchLoc)==0)
        {
            printf("%s\n",name[i]);
            found=1;
        }
    }
}
int main()
{
    char name[max_passengers][max_length];
    char loc[max_passengers][max_length];
    int age[max_passengers];
    int n;
    printf("enter the number of passengers:");
    scanf("%d",&n); getchar();

    for(int i=0;i<n;i++)
    {
        printf("passenger %d:",i+1);
        scanf("%s%d%s",name[i],&age[i],loc[i]);
        
    }

    sortPassengers(name,loc,n);

    printf("sorted list(by destination:)"); /*displaying after sorting*/
    for(int i=0;i<n;i++)
    {
        printf("%s\n%s\n",name[i],loc[i]); //do not add commas when inputting
    }

    char searchLoc[max_length];
    printf("enter destination to search:");
    scanf("%s",searchLoc);
    search(name,loc,n,searchLoc);

    return 0;
}
