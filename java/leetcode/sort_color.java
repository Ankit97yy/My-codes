// package leetcode;

import java.util.Arrays;

public class sort_color {
    public static void main(String[] args) {
        // int i = 0;
        // while (i < arr.length) {
        // if (arr[i] == i)
        // i++;
        // else if(arr[i]==arr[arr[i]]){
        // int temp=arr[arr[i]+1];
        // arr[arr[i]+1]=arr[i];
        // arr[i]=temp;
        // i++;
        // }
        // else{
        // int temp=arr[arr[i]];
        // arr[arr[i]]=arr[i];
        // arr[i]=temp;
        // }
        // System.out.println(Arrays.toString(arr));
        // }
        int[] nums = { 0,1,2,1 };
        int[] count = new int[3];
            for (int i = 0; i < nums.length; i++) {
                count[nums[i]]++;
            }
        System.out.println(Arrays.toString(count));
        for (int i = 0; i < nums.length; i++) {
            if(i<count[0]) nums[i]=0;
            else if(i<count[0]+count[1]) nums[i]=1;
            else nums[i]=2;
        }
        System.out.println(Arrays.toString(nums));
    }

}