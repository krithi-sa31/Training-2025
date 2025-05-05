#include <stdio.h>

int main() {
	// your code goes here
	int t;
	const int c1=100,c2=200;
	int d1,d2;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d",&d1,&d2);
	    
	    float a=(d1/100.0)*c1;
	    float b=(d2/100.0)*c2;
	    float p1=c1-a;
	    float p2=c2-b;
	    
	    if(p1<p2)
	    {
	        printf("FIRST\n");
	    }
	    else if(p1>p2)
	    {
	        printf("SECOND\n");
	    }
	    else
	    {
	        printf("BOTH\n");
	    }
	    
	}
	return 0;

}
