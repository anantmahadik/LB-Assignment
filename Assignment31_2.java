import java.util.*;


class Assignent31_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the string :");
        String s = sobj.nextLine();

        StringDemo obj = new StringDemo();

        int iRet = obj.CountSmall(s);

        System.out.println("Number of count character are :"+iRet);
    }
}

class StringDemo
{
    public int CountSmall(String str)
    {
        int iCount =  0;
        char Arr[] = str.toCharArray();
        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {   
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                iCount++;
            }
            
            
        }
        return iCount;
    }
}
