#include<iostream>
using namespace std;

int Display(int i)
{

    static int iDigit = 0;
    static int iMax = 1;
    static int iNo = 0;

    if(i > 0)
    {
        iDigit = i % 10;
           if(iMax < iDigit)
           {
            iMax = iDigit;
           }
        i = i / 10;
        Display(i);
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);
    int iRet = Display(iValue);
    printf("\nSum is : %d",iRet);

    return 0;
}