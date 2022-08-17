import java.util.ArrayList;
import java.util.HashMap;

import javax.swing.text.html.FormView;

public class twosum {
    public static void main(String[] args) {
        int[] arr={10,2,1,1,-5};
        int target=5;
        ArrayList<Integer> result= new ArrayList<>();
        HashMap<Integer,Integer> map= new HashMap<>();
        for (int i = 0; i < arr.length; i++) {
            map.put(i, arr[i]);
            }
        for (int i = 0; i < arr.length; i++) {
            if(map.containsValue(target-arr[i])){
                result.add(i);
            }
        }
        System.out.println(result);
        }
        
    }

