#include <stdio.h>

int main() {
	// your code goes here
	int i,j,t,n;
	char s[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    scanf("%s",s); 
	    int flag=0,count=0;
	
    	for( j=0;j<n;j++)
    	{
    	    if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') // check if each letter in the word is a vowel or not
    	    {
    	        count=0; // if it is a vowel, keep the count as zero
    	    }
    	    else
    	    {
    	        count++; // if not a vowel,incrment the counter, so that it knows the consequitive letters are constanants
    	        if (count==4)
    	        {
        	        flag=1;
        	        break;
    	        }
    	    }
    	}
    	if(flag)
    	{
    	    printf("NO\n");// count becomes 4, hence its not easy to prnounce the word
    	}
    	else
    	{
    	    printf("YES\n");
    	}
        	
	}	

}
