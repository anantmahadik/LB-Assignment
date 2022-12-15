#include<stdio.h>

int Pattern(int iNo)
{
    int i = 0;

    i = iNo * 70;

    return i;

    
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Please enter number");

    scanf("%d",&iValue);

    iRet = Pattern(iValue);

    printf("%d",iRet);
    
    return 0;
}