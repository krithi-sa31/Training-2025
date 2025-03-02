#include<stdio.h>
#include<string.h>
void reversestring(char *s)
{
    int len=strlen(s);
    for(int left=0,right=len-1;left<right;left++,right--)
    {
        char temp=s[left];
        s[left]=s[right];
        s[right]=temp;
    }
}

int main()
{
    char s[255];
    printf("enter the string:");
    scanf("%s",s);
    printf("before reversing:%s\n",s);
    reversestring(s);
    printf("reversed string:%s\n",s);
    return 0;

}
