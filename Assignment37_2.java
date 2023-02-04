import java.util.*;

class Assignent37_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter How many row :");
        int iRow = sobj.nextInt();
        
        System.out.println("Enter How many Column :");
        int iCol = sobj.nextInt();

        Pattern ptr = new Pattern();
        ptr.Pattern(iRow,iCol);
    }
}

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j <= iCol; j++)
            {
                System.out.print(j+"\t");
                
            }
            System.out.println();
        }
    }
}