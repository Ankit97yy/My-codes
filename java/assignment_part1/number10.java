import java.util.Scanner;

public class number10 {
    public static void main(String[] args) {
        Employee[] emp = new Employee[3];
        int year_of_joining;
        String name;
        String address;
        Scanner sc=new Scanner(System.in);
        for (int i = 0; i < emp.length; i++) {
            System.out.println("enter your name");
            name=sc.nextLine();
            System.out.println("enter address");
            address=sc.nextLine();
            System.out.println("enter year of joining");
            year_of_joining=sc.nextInt();
            sc.nextLine();
            emp[i]=new Employee(name, address, year_of_joining);
        }
        System.out.println("Name\tYear-of-joining\tAddress");
        for (int i = 0; i < emp.length; i++) {
            emp[i].display();
        }
    }
}

class Employee {
    int year_of_joining;
    String name;
    String address;

    Employee(String n, String ad, int year) {
        this.year_of_joining = year;
        this.name = n;
        this.address = ad;
    }

    void display() {
        System.out.printf("\n%s\t  %d\t\t%s\n", name, year_of_joining, address);
    }
}
