#include<iostream>
using namespace std;
template<class T>

T AddN(T Arr[], int iSize)
{
    int iCnt = 0;
    T iMax = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.1f,20.2f,30.3f,40.4f};
    int iMax = AddN(arr,5);
    printf("%d\n",iMax);

    float fMax = AddN(brr,4);
    printf("%f\n",fMax);

    return 0;
}

