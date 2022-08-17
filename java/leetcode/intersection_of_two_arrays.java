import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

/**
 * intersection_of_two_arrays
 */
public class intersection_of_two_arrays {

    public static void main(String[] args) {
        Set<Integer> lol= new HashSet<>();
        int[] nums1={2,4,1,3,1};
        int[] nums2={1,3,4,2};
        int j=0,left=0,right=0;
        boolean flag;
        for (int i = 0; i < nums1.length; i++) {
            flag=false;
            for (j=0;j < nums2.length; j++) {
                if(!lol.isEmpty()){
                    if(nums1[i]==nums2[j]){
                        if(j==right+1){
                            right=j;
                            lol.add(nums1[i]);
                            flag=true;
                            break;
                        }
                        else if(j==left-1){
                            left=j;
                            lol.add(nums1[i]);
                            flag=true;
                            break;
                        }
                    }
                    
                }
                else if(nums1[i]==nums2[j]){
                    lol.add(nums1[i]);
                    left=j;
                    right=j;
                    flag=true;
                    break;
                }
            }
            if(!flag)
            break;
        }
        int[] set= new int[lol.size()];
        j=0;
        for (int i : lol) {
            set[j++]=i;
        }
        System.out.println(Arrays.toString(set));
    }
}