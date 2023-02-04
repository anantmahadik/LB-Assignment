import java.util.*;

class Assignent33_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number :");
        int iNo = sobj.nextInt();
        
        Digit aobj = new Digit();
        int iRet = aobj.CountDiff(iNo);
        System.out.println("Difference of Sum of even and odd digit is :"+iRet);
    }
}

class Digit
{
    public int CountDiff(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        int iSum = 0;
        int iOdd = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > 0)
            {
                if(iDigit % 2 == 0)
                {
                    iSum = iSum + iDigit;
                }
                else if(iDigit % 2 != 0)
                {
                    iOdd = iOdd + iDigit;
                }
            }
            iNo = iNo / 10;
            
        }
        return iSum - iOdd;
    }

}