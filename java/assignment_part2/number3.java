// package assignment_part2;

import java.util.Scanner;

public class number3 {
    public static void main(String[] args) {
        int l, b, r;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter length");
        l = sc.nextInt();
        System.out.println("enter breadth");
        b = sc.nextInt();
        System.out.println("enter radius");
        r = sc.nextInt();
        circle cir = new circle(r);
        rectangle rec = new rectangle(l, b);
        cir.circle_area();
        rec.rectangle_area();

    }
}

class area_perimeter {
    int length, breadth, radius;

    area_perimeter(int l, int b) {
        this.length = l;
        this.breadth = b;
    }

    area_perimeter(int r) {
        this.radius = r;
    }

    void circle_area() {
        System.out.println("Area of the circle= " + 2 * 3.14 * radius);
    }

    void rectangle_area() {
        System.out.println("Area of rectangle= " + length * breadth);
    }
}

class circle extends area_perimeter {
    circle(int x) {
        super(x);
    }

}

class rectangle extends area_perimeter {
    rectangle(int l, int b) {
        super(l, b);
    }

}
