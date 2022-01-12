package assignment_part2;

import java.util.Arrays;
import java.util.Scanner;

public class number6 {
    public static void main(String[] args) {
        int[] arr=new int[5];
        Scanner sc= new Scanner(System.in);
        System.out.println("enter elements in the array");
        for (int i = 0; i < arr.length; i++) {
            arr[i]=sc.nextInt();
        }
        array ar= new array(arr);
        ar.bubble_sort();
        System.out.println(Arrays.toString(arr));
    }
}
class array{
    int[] arr=new int[5];
    Scanner sc = new Scanner(System.in);
    array(){
        System.out.println("enter the elements in array");
        for (int i = 0; i < arr.length; i++) {
            arr[i]=sc.nextInt();
        }
    }
    array(int[] arr){
        this.arr=arr;
    }
    void bubble_sort(){
        for (int i = 0; i < arr.length-1; i++) {
            for (int j = 0; j < arr.length-1; j++) {
                int temp;
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
}
