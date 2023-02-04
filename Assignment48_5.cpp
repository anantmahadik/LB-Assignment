#include<iostream>
using namespace std;

template<class T>

T Reverse(T *arr, int iSize)
{
    int *start = arr;
    int end = iSize - 1;
    int temp = 0;
    while(*start < end)
    {
        temp = *start;
        *start = arr[end];
        arr[end] = temp;

        *start++;
        end--;

    }
    for(int i = 0; i < iSize; i++)
    {
        cout<<arr[i]<<"\t";
    }
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    Reverse(arr,9);

    return 0;
}