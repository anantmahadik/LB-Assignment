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
    int iCnt = 0, iMin = Head->Data;

    while(Head != NULL)
    {       
        printf("| %d |-> ",Head->Data);
        if(iMin > Head->Data)
        {
            iMin = Head->Data;
        }
        Head = Head->Next;
        iCnt++;
    }
    

        printf("Smallest elements is : %d",iMin);    
}

int main()
{
    PNODE First = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    SearchFirstOcc(First);

    return 0;
}
