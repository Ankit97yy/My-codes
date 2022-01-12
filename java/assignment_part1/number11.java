import java.util.Scanner;

public class number11 {
   public static void main(String[] args) {
       double l,b;
       System.out.println("enter length and breadth");
       Scanner sc=new Scanner(System.in);
       l=sc.nextDouble();
       b=sc.nextDouble();
       Area rectangle= new Area(l,b);
       System.out.println("area of the rectangle= "+""+rectangle.returnarea());
       System.out.println("perimeter of the rectangle= "+""+rectangle.return_perimeter());
   } 

}
class Area{
    double l,b;
    Area(double l, double b){
        this.l=l;
        this.b=b;
    }
    double returnarea(){
        return l*b;
    }
    double return_perimeter(){
        return 2*(l+b);
    }
}
