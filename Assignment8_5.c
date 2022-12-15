#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 10; iCnt > 0; iCnt--)
    {
        
            printf("%d\t",iNo*iCnt);
       
    }
}
int main()
{
    int iValue = 0;
    printf("Please enter number");

    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}