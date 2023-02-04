#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range");
    }
    else
    {
        for(int i = iStart; i < iEnd; i ++)
        {
        printf("%d\t",i);
        }
    }
    

}

int main()
{
    int iValue1 = 0, iValue2 =0;

    printf("Please enter starting point :\n ");
    scanf("%d",&iValue1);
    
    printf("Please enter end point :\n ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}