import java.util.*;

class Assignent32_5
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
        System.out.println("Multiplies 11 are numbers is :");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 11 == 0))
            {
                System.out.println(Arr[iCnt]);
            }
            
        }
        
    }

}