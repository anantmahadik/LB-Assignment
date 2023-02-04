import java.util.*;


class Assignent31_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the string :");
        String s = sobj.nextLine();

        StringDemo obj = new StringDemo();

        boolean bRet = obj.CountCapitl(s);

        if(bRet == true)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
    }
}

class StringDemo
{
    public boolean CountCapitl(String str)
    {
        
        char Arr[] = str.toCharArray();
        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {   
            if(Arr[iCnt] == 'a' || Arr[iCnt] <= 'e' || Arr[iCnt] == 'i' || Arr[iCnt] == 'o' || Arr[iCnt] == 'u')
            {
                return true;
            }
            else if(Arr[iCnt] == 'A' || Arr[iCnt] == 'E' || Arr[iCnt] == 'I' || Arr[iCnt] == 'O' || Arr[iCnt] == 'U')
            {
                return true;
            }
               
        }
        return false;
    }
}
