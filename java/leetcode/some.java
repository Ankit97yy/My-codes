import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;

class some {
    public static void main(String[] args) {
        ArrayList<Integer> ss = new ArrayList<>();
        ArrayList<ArrayList<Integer>> result = new ArrayList<>();
        int[] nums = {5,3,1,7};
        int[] mod = new int[nums.length * 2];
        for (int j = 0; j < mod.length; j++) {
            mod[j] = nums[j % nums.length];
        }
        param(mod, nums.length, new ArrayList<Integer>(), result);
        for (int i = 0; i < mod.length; i++) {
            mod[i]=nums[nums.length-1-i%nums.length];
        }
        param(mod, nums.length, new ArrayList<Integer>(), result);
        System.out.println(result);
        System.out.println(result.size());
    }

    static void param(int[] mod, int len, ArrayList<Integer> current, ArrayList<ArrayList<Integer>> result) {
        for (int i = 0; i < len; i++) {
            for (int j = i; j < len + i; j++) {
                current.add(mod[j]);
            }
            ArrayList<Integer> temp = new ArrayList<>();
            temp.addAll(current);
            // if(!result.contains(temp))
                result.add(temp);
            current.clear();
        }
    }

}