#include<stdio.h>
int main()
{
    int scores[5];
    int highest,lowest,sum=0;
    printf("enter the scores:");
    for(int i=0;i<5;i++)
    {
      scanf("%d",&scores[i]);
    }
    highest=scores[0]; /*initialise highest to the firdt score i.e; to the score in 0th position*/
    lowest=scores[0];

    for(int i=0;i<5;i++)
    {
        if(scores[i]>highest)
        {
            highest=scores[i];
        }
        if(scores[i]<lowest)
        {
            lowest=scores[i];
        }
        sum+=scores[i];
    }

    float average=sum/5.0;

    printf("highest score:%d\n",highest);
    printf("lowest score:%d\n",lowest);
    printf("avergae:%f",average);

    return 0;

}
