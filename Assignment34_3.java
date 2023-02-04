import java.util.*;

class Assignent34_3
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
        int iRet = aobj.Display(Arr,iCheckNum);
        
        System.out.println("Entered "+iCheckNum+" number position is:"+iRet);
    }
}

class ArrayDemo
{
    public int Display(int Arr[],int iNo)
    {
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] == iNo))
            {
                iCount = iCnt+1;
                
            }
                        
        }
        if(iCount == 0)
        {
            return -1;
        }
        else
        {
            return iCount;
        }
    }

}