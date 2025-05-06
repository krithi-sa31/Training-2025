#include<stdio.h>
#define stksize 1000
typedef float T;
typedef struct{
    T elements[stksize];
    int size,top;
}Stack;

void stackinit(Stack* stk);
void stackpush(Stack* stk,T element);
int stackempty(Stack* stk);
T stacktop(Stack* stk);
void stckpop(Stack* stk);

int main()
{
    float salaries[]={50000,40000,48000,23000,2000};
    Stack stk;
    stackinit(&stk);
    for(int i=0;i<5;i++)
    {
        stackpush(&stk,salaries[i]);
    }
    printf("salaries from stack:");
    while(!stackempty(&stk)){
        float sal=stacktop(&stk);
        printf("%.2f ",sal);
        stckpop(&stk);
    }
}

void stackinit(Stack* stk){
    stk->size=0;
    stk->top=-1;
}

void stackpush(Stack* stk,T element){
    stk->elements[stk->size]=element;
    stk->size++;
    stk->top++;
}

int stackempty(Stack* stk){
    return (stk->top==-1);
}

T stacktop(Stack* stk){
    return stk->elements[stk->top];
}

void stckpop(Stack* stk){
    if(stackempty(stk)){
        printf("stack empty");
        return;
    }
    stk->top--;
    stk->size--;
}
