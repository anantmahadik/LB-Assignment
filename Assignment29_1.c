#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool CheckPerfectFun(int iNo)
{
    int iSum = 0, iCnt = 0;
    int iTemp = iNo;
    for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return (iSum == iTemp);
}
printf("Perfect number is :\n");
int DisplayPerfect(PNODE Head)
{
    int iSum = 0, iDigit = 0, iNo = 0;
    
    while(Head != NULL)
    {
        if(CheckPerfectFun(Head->Data)==true)
        {
            printf("%d is a perfect number \n",Head->Data);
        }
        printf("\t");        

        Head = Head->Next;
        
    }
}

int main()
{
    PNODE First = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,6);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    DisplayPerfect(First);

    return 0;
}
