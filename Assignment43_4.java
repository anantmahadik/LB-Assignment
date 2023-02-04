import java.util.*;
import java.io.*;

class Assignent42_4
{
    public static void main(String a[]) throws Exception
    {
        int Arr1[],Arr2[];

        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("Enter how many element in 1 Array :");
        int iNo1 = Integer.parseInt(bobj.readLine());
        Arr1 = new int[iNo1];

        for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Arr1[iCnt] =Integer.parseInt(bobj.readLine());
        }


        System.out.println("Enter how many element in 2 Array :");
        int iNo2 = Integer.parseInt(bobj.readLine());
        Arr2 = new int[iNo2];

        for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            Arr2[iCnt] =Integer.parseInt(bobj.readLine());
        }

        MyArray mobj = new MyArray();
        mobj.Display(Arr1,Arr2);


    }
}

class MyArray
{
    public void Display(int arr1[],int arr2[]) throws Exception
    {
        int brr1[],brr2[];
        brr1 = new int[arr1.length];
        brr2 = new int[arr2.length];

        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);
        System.out.println(arr1[0]);
        System.out.println("brr1 length :"+brr1.length);
        for(int iCnt = 0; iCnt < arr1.length; iCnt++)
        {
            brr1[iCnt] = arr1[iCnt];
            //System.out.print(brr1[iCnt]+"\t");
        }

        for(int iCnt = 0; iCnt < arr2.length; iCnt++)
        {
            brr2[iCnt] = arr2[iCnt];
            //System.out.print(brr2[iCnt]+"\t");
        }

        for(int iCnt = 0; iCnt < arr1.length; iCnt++)
        {
           // brr1[iCnt] = arr1[iCnt];
            System.out.print(brr1[iCnt]+"\t");
        }

        for(int iCnt = 0; iCnt < arr2.length; iCnt++)
        {
           // brr2[iCnt] = arr2[iCnt];
            System.out.print(brr2[iCnt]+"\t");
        }

    }
}