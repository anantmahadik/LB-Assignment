import java.util.*;

class Assignent35_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter first string :");
        String str1 = sobj.nextLine();
        
        System.out.println("Enter second string :");
        String str2 = sobj.nextLine();

        System.out.println("Enter number of character are check :");
        int iNo =sobj.nextInt();

        StringDemo dobj = new StringDemo();
                
        boolean bRet= dobj.StrCmp(str1,str2,iNo);
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
    public boolean StrCmp(String src, String dest,int iNo)
    {
        char ch1[] = src.toCharArray();
        char ch2[] = dest.toCharArray();
        
        int iCnt = 0;
        boolean bFlag = true;

        while(iCnt < iNo)
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