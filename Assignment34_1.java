import java.util.*;

class Assignent34_1
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

        System.out.println("Enter check number :");
        int iCheckNum = sobj.nextInt();

        ArrayDemo aobj = new ArrayDemo();
        boolean bRet = aobj.Display(Arr,iCheckNum);

        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }
}

class ArrayDemo
{
    public boolean Display(int Arr[],int iNo)
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] == iNo))
            {
                return true;
            }
            
        }
        return false;
    }

}