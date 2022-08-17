import java.util.Arrays;

public class prdouct_of_array_except_self {
    public static void main(String[] args) {
     int nums[]={-1,2};
     int temp=1;
     int[] output= new int[nums.length];
     output[0]=nums[0];
     for (int i = 0; i < output.length; i++) {
         if(i!=0) output[i]=temp;
         temp*=nums[i];
     }
     temp=1;
     for (int i = output.length-1; i >= 0; i--) {
         if(i==0) {output[i]=temp;
            break;}
        if(i!=output.length-1) output[i]=temp*output[i];
        temp*=nums[i];
        
    }
     System.out.println(Arrays.toString(output));
     
    }
}
