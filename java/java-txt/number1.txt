import java.util.Scanner;

public class number1 {
    public static void main(String[] args) {
        int[] n= new int[3];
        Scanner sc= new Scanner(System.in);
        System.out.println("enter three numbers");
        for (int i = 0; i < n.length; i++) {
            n[i]=sc.nextInt();
        }
        total_average(n);
    }   
    static void total_average(int[] n){
        float sum=0;
        for (int i = 0; i < n.length; i++) {
            sum+=n[i];
        }
        System.out.println("sum="+""+sum);
        System.out.println("avg="+""+sum/3);
    }
}
