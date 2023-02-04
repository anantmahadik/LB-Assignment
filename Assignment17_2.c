#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[],int iLength)
{
    int iCnt = 0, iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }    
    return iMin;
}

int main()
{
    int iCnt = 0,iRet = 0,iSize = 0;
    int *ptr = NULL;

    printf("Enter number of elements :\n ");
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

    iRet = Minimum(ptr,iSize);
    printf("Largest number is %d",iRet);

    free(ptr);
    return 0;
}