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

        ArrayDemo aobj = new ArrayDemo();
        int iRet = aobj.Display(Arr);
        
        System.out.println("Entered odd number product is:"+iRet);
    }
}

class ArrayDemo
{
    public int Display(int Arr[])
    {
        int iMult = 1;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2 != 0))
            {
                iMult = iMult * Arr[iCnt];
                
            }
                        
        }
        return iMult;
    }

}