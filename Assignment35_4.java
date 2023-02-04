import java.util.*;

class Assignent35_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter first string :");
        String str1 = sobj.nextLine();

        StringDemo dobj = new StringDemo();
                
        dobj.StrRevTogX(str1);
    }
}

class StringDemo
{
    public void StrRevTogX(String src)
    {
        char ch1[] = src.toCharArray();
        
        int iCnt = 0;
        int iEnd = ch1.length-1;
        char Temp;
        char First = ch1;
        char Last;

        while(iCnt < iEnd)
        {
            Temp = ch1[iEnd];
            Last[iEnd] = First[iCnt];
            First[iCnt] = Temp;
      
            iCnt++;            
            iEnd--;
        }
        System.out.println(ch1);
    }

}