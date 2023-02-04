#include<iostream>
using namespace std;

void Display(int i)
{
    static int iCnt = 1;
    static char ch = 'a';

    if(iCnt <= i)
    {
        printf("%c\t",ch);
        iCnt++;
        ch++;
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