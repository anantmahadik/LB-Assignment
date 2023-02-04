#include<iostream>
using namespace std;

void Display(int i)
{
    static int iCnt = 1;
    if(iCnt <= i)
    {
        printf("%d\t",iCnt);
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