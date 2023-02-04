import java.util.*;

class Assignent33_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number :");
        int iNo = sobj.nextInt();
        
        Digit aobj = new Digit();
        int iRet = aobj.Multiply(iNo);
        System.out.println("Multiplication is :"+iRet);
    }
}

class Digit
{
    public int Multiply(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        int iMult = 1;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > 0)
            {
                iMult = iMult * iDigit;
            }
            iNo = iNo / 10;
        }
        return iMult;
    }

}