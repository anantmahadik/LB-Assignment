#include<iostream>
using namespace std;

void Display(int i)
{
    static int iCnt = 0;
    if(iCnt < i)
    {
        printf("*\t");
        iCnt++;
        Display(i);
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}