import java.util.Scanner;


public class number7 {
    public static void main(String[] args) {
        System.out.println("enter a integer");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        digitsuum(n);
    }
    static void digitsuum(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        System.out.println("sum="+""+sum);
    }
}
