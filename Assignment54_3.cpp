#include<iostream>
using namespace std;

void Display(int i)
{
    static int iCnt = i;
    if(iCnt > 0)
    {
        printf("%d\t",iCnt);
        iCnt--;
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