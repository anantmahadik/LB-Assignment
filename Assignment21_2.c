
#include<stdio.h>

void Pattern(int iNo1,int iNo2)
{
    int i = 0,j = 0,k = 0,l = 1;
    
    

    for(i= 1; i <= iNo1; i++)
    {
        for(j = 0;j <= iNo2; j++)
        {
            if(i % 2 != 0)
            {
                k = k + 2;
                printf("%d\t",k);
            }
            else
            {
                printf("%d\t",l);
                l = l + 2;
            }
          
        }
        printf("\n");
        k = 0;
        l = 1;
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