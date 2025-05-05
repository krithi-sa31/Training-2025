#include<stdio.h>
#include<string.h>
int countOccurance(const char *dna, const char *pattern)
{
    int dnaLen=strlen(dna);
    int patternLen=strlen(pattern);
    int count=0;

    for(int i=0;i<=dnaLen-patternLen;i++)
    {
        if(strncmp(&dna[i],pattern,patternLen)==0) /*checking with individual letter hence strncmp*/
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char dna[100],pattern[100];
    printf("enter the dna sequence:");
    scanf("%s",dna);

    printf("enter pattern to search:");
    scanf("%s",pattern);
    
    int occurances=countOccurance(dna,pattern);
    printf("pattern found %d time in dna sequence\n",occurances);

    return 0;

}
