#include<iostream>
using namespace std;

template<class T>

T Frequency(T *arr, int iSize,T iNo)
{
    int iCount=0;
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt]==iNo)
        {
            iCount = iCnt+1;

        }
    }
    return iCount;
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(arr,9,40);
    printf("Value to search : 10\n");
    printf("Output : %d",iRet);

    return 0;
}