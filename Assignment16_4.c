#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iStart && Arr[iCnt] < iEnd)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }    
}

int main()
{
    int iCnt = 0,iRet = 0,iSize = 0,iValue1 = 0,iValue2 = 0;
    int *ptr = NULL;

    printf("Enter number of elements :\n ");
    scanf("%d",&iSize);

    printf("Enter start point:\n ");
    scanf("%d",&iValue1);

    printf("Enter end point:\n ");
    scanf("%d",&iValue2);

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

    Range(ptr,iSize,iValue1,iValue2);

    free(ptr);
    return 0;
}