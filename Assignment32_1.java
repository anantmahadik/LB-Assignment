import java.util.*;

class Demo
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter how many elements :");
        int iSize = sobj.nextInt();
        int Arr[] = new int[iSize];

        System.out.println("Enter the elements :");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayDemo aobj = new ArrayDemo();
        int iRet = aobj.Difference(Arr);
        System.out.println("Difference is :"+iRet);
    }
}

class ArrayDemo
{
    public int Difference(int Arr[])
    {
        int iSum = 0;
        int iOdd = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iSum = iSum + Arr[iCnt];
            }
            else if(Arr[iCnt] % 2 != 0)
            {
                iOdd = iOdd + Arr[iCnt];
            }
        }
        return iSum - iOdd;
    }

}