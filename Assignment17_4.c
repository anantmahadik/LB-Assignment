#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int iLength)
{
    int iCnt = 0, iNo = 0,iDigit = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];

        while(iNo != 0)
        {   
            iDigit = iNo % 10;
            if(iDigit == 3)
            {
                printf("%d \t",Arr[iCnt]);

            }
            iNo = iNo / 10;
        }
    }    
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

    Range(ptr,iSize);

    free(ptr);
    return 0;
}