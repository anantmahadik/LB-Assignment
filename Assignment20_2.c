#include<stdio.h>

void Pattern(int iNo1,int iNo2)
{
    int i = 0,j = 0;
    
    

    for(i= 1; i <= iNo1; i++)
    {
        char ch1 = 'A';
        char ch2 = 'a';
        for(j = 1;j <= iNo2; j++)
        {   
            if(i % 2 != 0)
            {
                
                printf("%c\t",ch1);
                ch1++;
            }
            else
            {   
                
                printf("%c\t",ch2);
                ch2++;
            }
        }
        printf("\n");
    }    
    
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    int *ptr = NULL;

    printf("Enter number of rows and columns :\n ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}