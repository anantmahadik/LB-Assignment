#include<iostream>
using namespace std;

int Display(int i)
{
    static int iMin = 9;
    static int iDigit = 1;
    if(i > 0)
    {
        iDigit = i % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        i = i / 10;
        
        Display(i);
    }
    return iMin;

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