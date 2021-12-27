import java.util.Scanner;

public class number2 {
    public static void main(String[] args) {
        String s;
        System.out.println("enter a string");
        Scanner sc= new Scanner(System.in);
        s=sc.nextLine();
        countvowels(s);

    }
    static void countvowels(String s){
        int count=0;
        for (int i = 0; i < s.length(); i++) {
            if(s.charAt(i)=='a' || s.charAt(i)=='e'|| s.charAt(i)=='i'|| s.charAt(i)=='o'|| s.charAt(i)=='u'){
                count++;
            }
        }
        System.out.println("total vowels="+""+count);
    }
}
