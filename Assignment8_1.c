#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    if(iNo > 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    if(iNo > 100)
    {
        printf("Large");
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