#include <stdio.h>

int removedup(int* num, int size)
{
    if(size==0)
    {
        return size;
    }
    int idx=0;
    for(int i=1;i<size;i++)
    {
        if(num[i]!=num[idx])
        {
            idx++;
            num[idx]=num[i];
        }
        
    }
    return idx + 1;
}

int compare(const void*a , const void*b)
{
    return(*(int*)a - *(int*)b);
}

int main() {
	// your code goes here
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        int *a=(int*)malloc(n*sizeof(int));
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }    
        
        qsort(a,n,sizeof(int),compare);
        
        int newsize=removedup(a,n);
        printf("%d\n",newsize);
        
        for(int i=0;i<newsize;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
        free(a);
    }
}
