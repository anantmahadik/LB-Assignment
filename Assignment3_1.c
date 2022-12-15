#include<stdio.h>

void PritEven(int iNo)
{
    
    if(iNo <= 0)
    {
        printf("%d",iNo);
    }
    int iEnd = 2*iNo;
    int iCnt = 0;

    for(iCnt = 2; iCnt <=iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
        { 
        printf("%d \t",iCnt);
        }
    }

}
int main()
{
    int iValue = 0;
    printf("Enter number ");
    scanf("%d",&iValue);    
    PritEven(iValue);  
    
    return 0;
}