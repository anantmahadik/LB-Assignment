import java.util.*;

class Assignent34_4
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

        System.out.println("Enter start number :");
        int iStart = sobj.nextInt();

        System.out.println("Enter end number :");
        int iEnd = sobj.nextInt();

        ArrayDemo aobj = new ArrayDemo();
        aobj.Display(Arr,iStart,iEnd);
    }
}

class ArrayDemo
{
    public void Display(int Arr[],int iStart,int iEnd)
    {
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
            {
                System.out.println(Arr[iCnt]);                
            }
        }
    }

}