#include<iostream>
using namespace std;
template<class T>

T AddN(T Arr[], int iSize)
{
    int iCnt = 0;
    T iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.1f,20.2f,30.3f,40.4f};
    int iSum = AddN(arr,5);
    printf("%d\n",iSum);

    float fSum = AddN(brr,4);
    printf("%f\n",fSum);

    return 0;
}

