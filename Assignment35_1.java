import java.util.*;

class Assignent35_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter first string :");
        String str1 = sobj.nextLine();
        
        System.out.println("Enter second string :");
        String str2 = sobj.nextLine();

        System.out.println("How many character are you concat from second string : ");
        int iNo = sobj.nextInt();

        StringDemo dobj = new StringDemo();
                
        dobj.StrNCat(str1,str2,iNo);
    }
}

class StringDemo
{
    public void StrNCat(String str1, String str2, int iNo)
    {
        System.out.print(str1+" ");
        char ch[] = str2.toCharArray();

        int iCnt = 0;
        while(iCnt <= iNo)
        {
            System.out.print(ch[iCnt]);
            iCnt++;
        }
    }
}