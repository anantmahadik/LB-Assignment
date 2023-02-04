#include<iostream>
using namespace std;

void Display()
{
    static int i = 5;

    if(i > 0)
    {
        printf("%d\t",i);
        i--;
        Display();
    }

}

int main()
{
    Display();

    return 0;
}