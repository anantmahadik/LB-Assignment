#include<stdio.h>

template<class T>

T Multiply(T No1, T No2,T No3)
{
    if(No1 > No2)
    {
        if(No1 > No3)
        {
            return No1;
        }
    }
    if(No2 > No1)
    {
        if(No2 > No3)
        {
            return No2;
        }
        
    }
    if(No3 > No1)
    {
        if(No3 > No2)
        {
            return No3;
        }
        
    }

}

int main()
{
    int iRet = Multiply(10,20,30);
    printf("%d\n",iRet);
    float fRet = Multiply(10.0f,20.0f,30.0f);
    printf("%f\n",fRet);

    return 0;
}