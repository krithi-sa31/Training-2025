#include <stdio.h>

int main() {
	// your code goes here
    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        int sum=a+b;
        
        if(sum==2 || sum==3 || sum==5 || sum==7 || sum==11)
        {
            printf("Alice\n");
        }
        else
        {
            printf("Bob\n");
        }
        
        
    }
    return 0;
}
