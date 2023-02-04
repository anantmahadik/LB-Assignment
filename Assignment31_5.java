import java.util.*;

class Assignent31_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the string :");
        String s = sobj.nextLine();

        StringDemo obj = new StringDemo();

        obj.ReverseString(s);
    }
}

class StringDemo
{
    public void ReverseString(String str)
    {
        int iSize =str.length();
        iSize--;
        char Arr[] = str.toCharArray();
        int iStart = Arr[0];
        char iEnd = Arr[iSize];
        char Temp;

        while(iStart < iEnd)
        {
            Temp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = Temp;

            iStart++;
            iEnd--;
        }
        System.out.println(str);

    }
}
