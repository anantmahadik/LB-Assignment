#include<iostream>
using namespace std;

int Display(int i)
{

    static int iDigit = 0;
    static int iSum = 0;
    static int iNo = 0;

    if(i > 0)
    {
        iDigit = i % 10;
        iSum = iSum + iDigit;    
        i = i / 10;
        Display(i);
    }
    return iSum;
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