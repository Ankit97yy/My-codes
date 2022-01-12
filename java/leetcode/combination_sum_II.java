package leetcode;

import java.util.ArrayList;

public class combination_sum_II {
    static void subseq(int[] up,int add,int i,ArrayList<Integer>res){
        if(add>5){
            return;
        }
        if(add==5){
            System.out.println(res);
            return;
        }
        if(i==up.length){
            // if(res.size()==0) return;
            // res.remove(res.size()-1);
            return;
        }
        int temp=up[i++];
        subseq(up, add, i, res);
        add+=temp;
        res.add(temp);
        subseq(up, add, i, res);
        res.remove(res.size()-1);
    }
    // static void stri(String p,String up){
    //     if(up.isEmpty()){
    //         System.out.println(p);
    //         return;
    //     }
    //     char ch=up.charAt(0);
    //     stri(p, up.substring(1));
    //     stri(p+ch, up.substring(1));
    // }
    public static void main(String[] args) {
        int candidate[]={2,3,5};
        subseq(candidate, 0, 0, new ArrayList<Integer>());
        // stri("", "abc");
       
    }
}
