#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
       
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t *\t",iCnt);
        
    }    
    
}

int main()
{
    int iValue = 0;
    int *ptr = NULL;

    printf("Enter number of elements :\n ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}