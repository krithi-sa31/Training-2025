#include <stdio.h>

int main() {
	// your code goes here
	int t,a,o,temp;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d",&a,&o);
	    while(o!=0)  //this condition is to check the gcd
	    {
	        temp=o;
	        o=a%o;
	        a=temp;
	    }
	    printf("%d\n",a);
	}

}
