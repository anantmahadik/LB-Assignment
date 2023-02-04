import java.util.*;


class Assignent31_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the string :");
        String s = sobj.nextLine();

        StringDemo obj = new StringDemo();

        int iRet = obj.CountCapitl(s);

        System.out.println("Number of count character are :"+iRet);
    }
}

class StringDemo
{
    public int CountCapitl(String str)
    {
        int iSmallCount =  0, iCapCount = 0;
        char Arr[] = str.toCharArray();
        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {   
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                iSmallCount++;
            }
            else if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                iCapCount++;
            }
            
            
        }
        return iSmallCount - iCapCount;
    }
}
