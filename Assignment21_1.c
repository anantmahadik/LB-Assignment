
#include<stdio.h>

void Pattern(int iNo1,int iNo2)
{
    int i = 0,j = 0;
    int k = 1;
    

    for(i= 0; i < iNo1; i++)
    {
        for(j = 0;j < iNo2; j++)
        {
            if(k < 10)
            {
                printf("%d\t",k);
            }
            else
            {
                k = 1;
                printf("%d\t",k);
            }
            
            k++;
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