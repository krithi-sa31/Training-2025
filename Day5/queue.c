#include<stdio.h>
#define qsize 1000
typedef float T;
typedef struct{
    T elements[qsize];
    int size,front,rear;
}q;

void qinit(q* stk);
void qpush(q* stk,T element);
int qempty(q* stk);
T qfront(q* stk);
T qrear(q* stk);
void qpop(q* stk);

int main()
{
    float salaries[]={50000,40000,48000,23000,2000};
    q stk;
    qinit(&stk);
    for(int i=0;i<5;i++)
    {
        qpush(&stk,salaries[i]);
    }
    printf("salaries from q:");
    while(!qempty(&stk)){
        float sal=qfront(&stk);
        printf("%.2f ",sal);
        qpop(&stk);
    }
}

void qinit(q* stk){
    stk->size=0;
    stk->front=-1;
    stk->rear=-1;
}

void qpush(q* stk,T element){
    stk->rear++;
    stk->elements[stk->size]=element;
    stk->size++;
    if(stk->front==-1){
        stk->front=0;      
    }
}

int qempty(q* stk){
    return (stk->front==-1);
}

T qfront(q* stk){
    return stk->elements[stk->front];
}

T qrear(q* stk){
    return stk->elements[stk->rear];
}

void qpop(q* stk){
    if(qempty(stk)){
        printf("q empty");
        return;
    }
    if (stk->front==stk->rear){
        stk->front=-1;
        stk->rear=-1;
        stk->size=0;
    }
    else{
        stk->front++;
    }

   
}
