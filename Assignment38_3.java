import java.util.*;

class Assignent38_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        Pattern ptr = new Pattern();
        ptr.Pattern(str);
    }
}

class Pattern
{
    public void Pattern(String str)
    {
        int iRow = str.length();
        int iCol  = str.length();
        char ch[] = str.toCharArray();
        

        for(int i = 1; i <= iRow; i++)
        {
            int iCnt = 0;
            for(int j = 1; j <= iCol; j++)
            {
                if(i >= j)
                {
                    System.out.print(ch[iCnt]+"\t");
                    iCnt++;
                }
            }
            System.out.println();
        }
    }
}