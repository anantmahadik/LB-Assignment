import java.util.*;

class Assignent42_2
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
        int iMin1 = arr1[0], iMin2 = arr2[0];
        for(int iCnt = 0; iCnt < arr1.length; iCnt++)
        {
            if(iMin1 > arr1[iCnt])
            {
                iMin1 = arr1[iCnt];
            }
        }
        
        for(int iCnt = 0; iCnt < arr2.length; iCnt++)
        {
            if(iMin2 > arr2[iCnt])
            {
                iMin2 = arr2[iCnt];
            }            
        }
        
        System.out.println("Min element of arr1 :"+iMin1+"\t Min element of arr2 :"+iMin2);
        
    }
}