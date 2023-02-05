#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->Data = no;
    newn->Next = NULL;
    
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

int SearchFirstOcc(PNODE Head)
{
    int iCnt = 0, iAdd = 0;

    while(Head != NULL)
    {       
        printf("| %d |-> ",Head->Data);
        if(Head->Data % 2 == 0)
        {
            iAdd = iAdd + Head->Data;
        }
        Head = Head->Next;
        iCnt++;
    }
    

        printf("\nAddition of elements is : %d",iAdd);    
}

int main()
{
    PNODE First = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    SearchFirstOcc(First);

    return 0;
}
