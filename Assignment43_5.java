import java.util.*;

class Assignent43_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the how many student are there :");
        int iNo = sobj.nextInt();

        float arr[] = new float[iNo];

        System.out.println("Enter marks of student");
        for(int iCnt = 0; iCnt < arr.length; iCnt++)
        {
            arr[iCnt] = sobj.nextFloat();
        }

        MyArray mobj = new MyArray();
        mobj.Percentage(arr);
    }
}

class MyArray
{
    public void Percentage(float arr[])
    {
        for(int iCnt = 0; iCnt < arr.length; iCnt++)
        {
            if(arr[iCnt] <= 35)
            {
                System.out.println(arr[iCnt]+" \tFail");
            }
            else if(arr[iCnt] >= 35 && arr[iCnt] <= 50)
            {
                System.out.println(arr[iCnt]+" \tPass Class");
            }
            else if(arr[iCnt] >= 50 && arr[iCnt] <= 60)
            {
                System.out.println(arr[iCnt]+" \tSecond Class");
            }
            else if(arr[iCnt] >= 60 && arr[iCnt] <= 70)
            {
                System.out.println(arr[iCnt]+" \tFirst Class");
            }
            else if(arr[iCnt] >= 70 && arr[iCnt] <= 100)
            {
                System.out.println(arr[iCnt]+" \tFirst Class With Distinction Class");
            }
            else
            {
                System.out.println(" \tEnter valid record");
            }
        }
    }
}