import java.util.Scanner;

public class number9 {
    public static void main(String[] args) {
        double base,height;
        Scanner sc= new Scanner(System.in);
        System.out.println("enter base");
        base=sc.nextDouble();
        System.out.println("enter height");
        height=sc.nextDouble();
        System.out.println("Area of the triangle= "+""+area_of_triangle(base, height));
    }
    static double area_of_triangle(double base, double height){
        return 0.5*base*height;
    }
}
 