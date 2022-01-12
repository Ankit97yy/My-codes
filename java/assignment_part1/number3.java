import java.util.Arrays;

public class number3 {
  static  String[] greater_20 = { "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
   static String[] smaller_20 = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven",
            "tweleve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    public static void main(String[] args) {
        int number = 32757;
        double digit = Math.floor(Math.log10(number)) + 1;
        int[] arr = new int[(int) digit];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = number % 10;
            number /= 10;
        }
        System.out.println(Arrays.toString(arr));
    }

    static String ones(int n){
        return smaller_20[n-1];
    }
    
}
