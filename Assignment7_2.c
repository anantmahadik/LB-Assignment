#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
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