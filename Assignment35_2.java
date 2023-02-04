import java.util.*;

class Assignent35_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter first string :");
        String str1 = sobj.nextLine();
        
        System.out.println("Enter second string :");
        String str2 = sobj.nextLine();

        StringDemo dobj = new StringDemo();
                
        boolean bRet= dobj.StrCmp(str1,str2);
        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }
}

class StringDemo
{
    public boolean StrCmp(String src, String dest)
    {
        char ch1[] = src.toCharArray();
        char ch2[] = dest.toCharArray();
        
        int iCnt = 0;
        boolean bFlag = true;

        while(iCnt < ch1.length)
        {
            if(ch1[iCnt] != ch2[iCnt])
            {
                
                bFlag = false;
                break;
            }
            iCnt++;            
        }
        return bFlag;

    }

}