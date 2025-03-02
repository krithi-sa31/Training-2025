#include <stdio.h>

int main() {
	// your code goes here
	int t,n,k,a[100];
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d",&n,&k);
	    int w=k;
	    for (int j=0;j<n;j++)
        {
	        scanf("%d",&a[j]);
        }
        for (int j=0;j<n;j++)
        {
            if(w>=a[j]) // if the amount of money present in the atm is more than what the individual wants to withdraw
            {
                w=w-a[j]; //subtract the total money by how much the person wants to withdraw
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
       printf("\n"); //the 1's and 0's keep displaying next to each other,giving the desired output. only when this line is put it goes to nect line for the next testcase
	}

}
