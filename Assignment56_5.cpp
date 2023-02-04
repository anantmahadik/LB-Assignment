#include<iostream>
using namespace std;

int Display(int i)
{
    static int iDigit = 0;
    static int iRev = 0;
    if(i > 0)
    {
        iDigit = i % 10;
        iRev = (iRev * 10) + iDigit;
        i = i / 10;
        Display(i);
    }
    return iRev;

}

int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);
    int iRet = Display(iValue);
    printf("Product is : %d",iRet);

    return 0;   
}