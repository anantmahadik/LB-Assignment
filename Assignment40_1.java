import java.util.*;

class Assignent40_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter how many row :");
        int iRow = sobj.nextInt();

        System.out.println("Enter how many row :");
        int iCol = sobj.nextInt();

        Pattern ptr = new Pattern();
        ptr.Pattern(iRow,iCol);
    }
}

class Pattern
{
    public void Pattern(int iRow,int iCol)
    {   

        for(int i = iRow; i > 0; i--)
        {
            for(int j = 1; j <= iCol ; j++)
            {
                if(i == j)
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
    }
}