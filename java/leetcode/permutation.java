import java.util.ArrayList;
import java.util.LinkedList;

public class permutation {
    public static void main(String[] args) {
        int[] arr={5,3,1,7};
        LinkedList<Integer> link= new LinkedList<>();
        for (int i = 0; i < arr.length; i++) {
            link.add(arr[i]);
        }
        ArrayList<ArrayList<Integer>> result= new ArrayList<>();
        permut(link, new ArrayList<Integer>(), result,arr.length);
        System.out.println(result);
        System.out.println(result.size());
    }
    static void permut(LinkedList<Integer> arr,ArrayList<Integer> current,ArrayList<ArrayList<Integer>> result,int len){
        if(current.size()==len){
            ArrayList<Integer> temp=new ArrayList<>();
            temp.addAll(current);
            result.add(temp);
            return;
        }
        for (int i = 0; i < arr.size(); i++) {
            current.add(arr.get(i));
            int temp=arr.get(i);
            arr.remove(i);
            permut(arr, current, result,len);
            arr.add(i, temp);
            current.remove(current.size()-1);
        }

    }
}
