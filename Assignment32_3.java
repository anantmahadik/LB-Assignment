import java.util.*;

class Assignent32_3
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
        aobj.Display(Arr);
        
    }
}

class ArrayDemo
{
    public void Display(int Arr[])
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 2 == 0))
            {
                System.out.println("Divisible b 5 & 2 are numbers is :");
                System.out.println(Arr[iCnt]);
            }
            
        }
        
    }

}