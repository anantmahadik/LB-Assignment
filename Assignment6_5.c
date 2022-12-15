#include<stdio.h>

void Percentage(int iNo1,int iNo2)
{
    float iMult = 0.0;
    if(iNo2==0)
    {
        printf("Wrong number\n");
    }
    iMult = (iNo2 *100)/iNo1;
    printf("%f percentage",iMult);
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;
    
    printf("Please three enter total marks");
    scanf("%d",&iValue1);
    printf("Please three obtained marks");
    scanf("%d",&iValue2);

    Percentage(iValue1,iValue2);
    
   

    return 0;
}