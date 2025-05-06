#include<stdio.h>
typedef float T;
struct Node
{
    T element;
    struct Node* link;
};
typedef struct Node node;

typedef struct
{
    node *first, *tail, *prev;
    int size;
}List;

void listinit(List* list);
node* createnode(T element);
void listpushfront(List* list,T element);
void listpushrear(List* list,T element);
int listempty(List* list);
T listfront(List* list);
T listrear(List* list);
void listpopfront(List* list);
void listpoprear(List* list);


int main()
{
    float salaries[]={50000,40000,48000,23000,2000};
    List list;
    listinit(&list);
    for(int i=0;i<5;i++)
    {
        listpushrear(&list,salaries[i]);
    }

    printf("salaries");
    for(node* nodes= list.first;nodes!=NULL; nodes=nodes->link)
    {
        printf("%.2f",nodes->element);
    }
}


void listinit(List* list)
{
    list->first==NULL;
    list->tail==NULL;
    list->size=0;
}

node* createnode(T element)
{
    node* nodes=(node*)malloc(sizeof(node));
    nodes->element=element;
    nodes->prev=NULL;
    nodes->link=NULL;
}

void listpushfront(List* list,T element)
{

}




void listpushrear(List* list,T element)
{
    node* nodes =createnode(element);
    if(list->first==NULL)
    {
        list->first=nodes;
        list->tail=nodes;
    }
    else{
        list->tail->link=nodes;
        nodes->prev=list->tail;
        list->tail=nodes;
    }

}
int listempty(List* list);
T listfront(List* list);
T listrear(List* list);
void listpopfront(List* list);
void listpoprear(List* list);
