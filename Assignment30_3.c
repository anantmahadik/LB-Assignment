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

int DisplaySumDigit(PNODE Head)
{
    int iSum = 1, iDigit = 0, iNo = 0,iRev = 0,iTemp = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iTemp = Head->Data;
        while(iNo != 0)
        {
            iDigit = iNo % 10;  
            if(iDigit > 0)
            {
                iSum = iSum * iDigit;
            }

            iNo = iNo / 10;
        }
        printf("%d\t",iSum);        

        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&First,414);
    InsertFirst(&First,51);
    InsertFirst(&First,6);
    InsertFirst(&First,11);

    DisplaySumDigit(First);

    return 0;
}
