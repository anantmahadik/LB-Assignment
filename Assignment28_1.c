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

int SearchFirstOcc(PNODE Head,int no)
{
    int iCnt = 0;
    int iRet = 0;
    while(Head != NULL)
    {       
        iCnt++;
        printf("| %d |-> ",Head->Data);
        if(Head->Data == no)
        {
            iRet = iCnt;
            break;
        }
        Head = Head->Next;
        
    }
    

    if(iRet > 0)
    {
        printf("Occerence in linkedlist : %d",iRet);
        
    }
    else
    {
        printf("Not in linked list");
    }
       
    
}

int main()
{
    PNODE First = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    printf("Enter the occurence number : \n");
    scanf("%d",&iValue);

    SearchFirstOcc(First,iValue);

    return 0;
}
