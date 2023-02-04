#include<stdio.h>
#include<stdlib.h>
int Product(int Arr[],int iLength)
{
    int iCnt = 0, iMult = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iMult = iMult * Arr[iCnt];
        }
    }    
    if(iMult == 1)
    {
        return 0;
    }
    return iMult;
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

    iRet = Product(ptr,iSize);
    printf("Product is %d",iRet);

    free(ptr);
    return 0;
}