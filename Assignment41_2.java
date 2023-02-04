import java.util.*;

class Assignent41_2
{
    public static void main(String a[])
    {
        int Arr1[],Arr2[];

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter how many element in 1 Array :");
        int iNo1 = sobj.nextInt();
        Arr1 = new int[iNo1];

        for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Arr1[iCnt] = sobj.nextInt();
        }


        System.out.println("Enter how many element in 2 Array :");
        int iNo2 = sobj.nextInt();
        Arr2 = new int[iNo2];

        for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            Arr2[iCnt] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.Display(Arr1,Arr2);


    }
}

class MyArray
{
    public void Display(int arr1[],int arr2[])
    {
        for(int iCnt = 0; iCnt < arr1.length; iCnt++)
        {
            if(arr1[iCnt] % 2 == 0)
            {
                System.out.print(arr1[iCnt]+"\t");
            }
            
        }
        System.out.println();
        
        for(int iCnt = 0; iCnt < arr2.length; iCnt++)
        {
            if(arr2[iCnt] % 2 == 0)
            {
                System.out.print(arr2[iCnt]+"\t");
            }}
    }
}