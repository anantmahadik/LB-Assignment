import java.util.*;

class Assignent33_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number :");
        int iNo = sobj.nextInt();
        
        Digit aobj = new Digit();
        int iRet = aobj.CountEven(iNo);
        System.out.println("3 and 7 between count is :"+iRet);
    }
}

class Digit
{
    public int CountEven(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        int iCount = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit < 7 && iDigit > 3)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }

}