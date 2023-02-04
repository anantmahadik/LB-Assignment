#include<iostream>
using namespace std;

int Display(int i)
{
    static int iDigit = 1;
    static int iFact = 1;
    if(i > 0)
    {
        iDigit = i % 10;
        iFact = iFact * iDigit;
        i = i / 10;
        Display(i);
    }
    return iFact;

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