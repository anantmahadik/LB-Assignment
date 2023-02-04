#include<stdio.h>
#include<stdlib.h>
int Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]  == iNo)
        {
           iCount = iCnt;
           break; 
        }
    }    
    if(iCount > 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iCnt = 0,iRet = 0,iSize = 0,iValue = 0;
    int *ptr = NULL;

    printf("Enter number of elements :\n ");
    scanf("%d",&iSize);

    printf("Enter frequency number:\n ");
    scanf("%d",&iValue);

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

    iRet = Check(ptr,iSize,iValue);
    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurence of number is %d",iRet);
    }
    free(ptr);
    return 0;
}