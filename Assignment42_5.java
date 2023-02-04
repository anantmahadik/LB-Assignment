import java.util.*;
import java.io.*;

class Assignent42_5
{
    public static void main(String a[]) throws Exception
    {
        int Arr1[];

        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("Enter how many element in 1 Array :");
        int iNo1 = Integer.parseInt(bobj.readLine());
        Arr1 = new int[iNo1];

        for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Arr1[iCnt] =Integer.parseInt(bobj.readLine());
        }

        MyArray mobj = new MyArray();
        boolean bRet = mobj.ChkPallindrome(Arr1);
        if(bRet == true)
        {
            System.out.println("Array1 is pallindrome");
        }
        else
        {
            System.out.println("Array1 not pallindrome");
        }

    }
}

class MyArray
{
    public boolean ChkPallindrome(int arr1[]) throws Exception
    {
        int iStart = 0;
        int iEnd = arr1.length-1;
        int iTemp = 0;
        boolean bFlag = true;
    
        while(iStart < iEnd)
        {
            if(arr1[iStart] != arr1[iEnd])
            {
                bFlag = false;
                break;
            }
            iStart++;
            iEnd--;
        }
        return bFlag;
    }
}