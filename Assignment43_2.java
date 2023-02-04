import java.util.*;
import java.io.*;

class Assignent43_2
{
    public static void main(String a[]) throws Exception
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("Enter how many element");
        int iNo = Integer.parseInt(bobj.readLine());

        int arr[] = new int[iNo];

        for(int iCnt = 0; iCnt < arr.length; iCnt++)
        {
            arr[iCnt] = Integer.parseInt(bobj.readLine());
        }

        MyArray mobj = new MyArray();
        mobj.ReverseArray(arr);
    }
}

class MyArray
{
    public void ReverseArray(int arr[]) throws Exception
    {
        int iDigit = 0;
        int iNo = 0;
        int iNo1 = 0;   
        for(int iCnt = 0; iCnt < arr.length; iCnt++)
        {
            iNo = arr[iCnt];
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iNo1 = iNo1 + iDigit;
                iNo = iNo / 10;
            }
            System.out.println(iNo1);
            iNo1 = 0;
        }

    }
}