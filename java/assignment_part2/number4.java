package assignment_part2;

import java.util.Scanner;

public class number4 {
    public static void main(String[] args) {
        int intrad;
        double dourad;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter radius as an integer");
        intrad=sc.nextInt();
        System.out.println("enter radius as a double");
        dourad=sc.nextDouble();
        circle intradius =  new circle(intrad);
        circle douradius =  new circle(dourad);
        intradius.calArea();
        douradius.calArea();

    }
}
class circle{
    double radius;
    circle(int x){
        this.radius=x;
    }
    circle(double x){
        this.radius=x;
    }
    void calArea(){
        System.out.println("Radius of the circle= "+2*3.14*radius);
    }
}
