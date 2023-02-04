import java.util.*;

class Assignent43_3
{
    public static void main(String a[])
    {
        
        Scanner input = new Scanner(System.in);

        System.out.println("Enter character ");
        char[] ch = input.next().toCharArray();
        
        MyArray aobj = new MyArray();
        int iRet = aobj.ArrayCapital(ch);

        System.out.println("Number of capital character are :"+iRet);
    }
}

class MyArray
{
    int ArrayCapital(char arr[])
    {
        int iCount = 0;
        for(int iCnt = 0; iCnt < arr.length; iCnt++)
        {
            if(arr[iCnt] >= 'A' && arr[iCnt] <= 'Z')
            {
                iCount++;
            }
        }
        return iCount;
    }
}
