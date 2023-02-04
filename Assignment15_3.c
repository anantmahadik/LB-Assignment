#include<stdio.h>
#include<stdlib.h>
#define TRUE  1
#define FALSE 0

typedef int BOOL;

void Check(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]  == 11)
        {
            printf("11 is present");
            break;
        }

    }
    if(iCnt == iLength)
    {
        printf("11 is absent");
    }
    
}

int main()
{
    int iCnt = 0,iRet = 0,iSize = 0;
    int *ptr = NULL;
    BOOL bRet = FALSE;

    printf("Please enter number of elements :\n ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unnable to allocate memory \n");
        return -1;
    }
    printf("Enter %d elements",iSize);
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        printf("Enter element :%d  :",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    }

    Check(ptr,iSize);
    
    free(ptr);
    return 0;
}