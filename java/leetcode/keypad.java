import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;

class keypad{
    public static void main(String[] args) {
        String num="45";
        ArrayList<Integer> numbers= new ArrayList<>();
        for (int i = 0; i < digits.length(); i++) {
            String t=digits.charAt(i)+"";
            numbers.add(Integer.parseInt(t));
        }
        String[] keypad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        ArrayList<String> result= new ArrayList<>();
        key("", 0, keypad, numbers, result);
        System.out.println(result);
        System.out.println(result.size());
    }
    static void key(String temp_res,int index,String[] keys,ArrayList<Integer> nums,ArrayList<String> result){
        if(index>nums.size()-1){
            result.add(temp_res);
            return;
        }
        for (int i = 0; i < keys[nums.get(index)].length(); i++) {
            char c=keys[nums.get(index)].charAt(i);
            key(temp_res+c,index+1, keys, nums,result);
        }
    }
}