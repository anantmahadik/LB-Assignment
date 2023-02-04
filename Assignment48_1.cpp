#include<iostream>
using namespace std;

template<class T>

T Display(T Value, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Value<<"\t";
    }   
    cout<<"\n";
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);

    return 0;
}