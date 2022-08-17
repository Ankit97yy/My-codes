import java.util.Arrays;

/**
 * number_of_laser2125
 */
public class number_of_laser2125 {

    public static void main(String[] args) {
        String[] bank = {"010","000","111","101"};
        int[] b={9,3,2};
        Arrays.sort(b);
        int count=0,temp=0,output=0;
        for (int i = 0; i < bank.length; i++) {
            String t=bank[i];
            for (int j = 0; j < t.length(); j++) {
                if(t.charAt(j)=='1') temp++;
            }
            output+=count*temp;
            if(temp!=0) count=temp;
            temp=0;
        }
        System.out.println(output);
    }
}