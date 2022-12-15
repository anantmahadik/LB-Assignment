#include<stdio.h>

void Display()
{
    register int i = 0;
    int j = 5;
    for(i = j;i> 0;i-=2)
    {
        printf("%d\n",i);
        i++;
        
    }

}

int main()
{ 
    Display();  
    
    return 0;
}