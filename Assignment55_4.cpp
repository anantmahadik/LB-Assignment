#include<iostream>
using namespace std;

int Display(int i)
{
    static int iCnt = 1;
    static int iFact = 1;
    if(iCnt <= i)
    {
        iFact = iFact * iCnt;
        iCnt++;
        
        Display(i);
    }
    return iFact;

}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    int iRet = Display(iValue);
    printf("Factorial is : %d",iRet);

    return 0;
}