#include<stdio.h>
#define max 1000
struct fiction_b
{
    char title[250],author[250];
    float price;
};

typedef struct fiction_b Fiction;

struct Nonfiction_b
{
    char title[250],author[50];
    float price;
};

typedef struct Nonfiction_b NonFiction;

union booktype_b
{
    Fiction fict;
    NonFiction Nonfict;
};

typedef union booktype_b Booktype;

struct book_b
{
    int type;
    Booktype booktype;
};
typedef struct book_b book;

int bookcount;
book books[max];

void readBooks()
{
    printf("enter the number of books:");
    scanf("%d",&bookcount);
    for(int i=0;i<bookcount;i++)
    {
        printf("enter the book type (1-fiction 2-non ficntion)");
        scanf("%d",&books[i].type);
        switch(books[i].type)
        {
            case 1: printf("enter fiction book details(title,author,price):");
            scanf("%s%s%f",books[i].booktype.fict.title,books[i].booktype.fict.author,&books[i].booktype.fict.price);
            break;

            case 2: printf("enter non fiction book details(title,author,price):");
            scanf("%s%s%f",books[i].booktype.Nonfict.title,books[i].booktype.Nonfict.author,&books[i].booktype.Nonfict.price);
            break;
        }
    }
}
void displayBook()
{
    for(int i=0;i<bookcount;i++)
    {
        switch(books[i].type)
        {
            case 1: printf("Fiction book :%s%s%.2f\n",books[i].booktype.fict.title,books[i].booktype.fict.author,books[i].booktype.fict.price);
            break;
            

            case 2: printf("Non Fiction book :%s%s%.2f\n",books[i].booktype.Nonfict.title,books[i].booktype.Nonfict.author,books[i].booktype.Nonfict.price);
            break;
        }
    }
}

int main()
{
    readBooks();
    displayBooks();
    return 0;
}
