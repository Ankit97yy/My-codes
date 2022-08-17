import java.util.Arrays;

public class cyclic_sort {
    public static void main(String[] args) {
       int arr[]= {3,1,2,1,1,1,1,0};
       int start=0,end=0,sum=0,target=6;
       int[] result=new int[2];

       while(true){
        if(sum>=target && end-start-1==0){
            result[0]=start;
            result[1]=end-1;
            break;
        }
        else if(sum>=target &&arr[1]-arr[0]==2){
            result[0]=start;
            result[1]=end-1;
            sum-=arr[start++];

        }
        else if(end >arr.length-1) break;
        else sum+=arr[end++];

       }
       System.out.println(Arrays.toString(result));
    }
}
