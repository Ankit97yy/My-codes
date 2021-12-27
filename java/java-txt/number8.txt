import java.util.Scanner;

public class number8 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("enter a year");
        int n=sc.nextInt();
        leapyear(n);
    }
    static void leapyear(int n){
        if(n%4==0)
            System.out.println("leap year");
        else
            System.out.println("not leap year");
    }
}
