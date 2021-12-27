import java.util.Scanner;

public class number5 {
    public static void main(String[] args) {
        Employee[] emp= new Employee[100];
        String lastname;
        String firstname;
        int hourlywages;
        int yearswithcompany;
        Scanner sc= new Scanner(System.in);
        for (int i = 0; i < emp.length; i++) {
            System.out.println("enter first name");
            firstname=sc.nextLine();
            System.out.println("enter last name");
            lastname=sc.nextLine();
            System.out.println("enter hourly wages");
            hourlywages=sc.nextInt();
            System.out.println("enter years with company");
            yearswithcompany=sc.nextInt();
            emp[i]=new Employee(lastname, firstname, hourlywages, yearswithcompany);
            sc.nextLine();
        }
        for (int i = 0; i < emp.length; i++) {
            emp[i].display();
        }
    }
  
}
class Employee{
    String lastname;
    String firstname;
    int hourlywages;
    int yearswithcompany;
    Employee(String last,String first, int wage, int years){
        this.lastname=last;
        this.firstname=first;
        this.hourlywages=wage;
        this.yearswithcompany=years;
    }
    void display(){
        if(this.yearswithcompany>=20){
            System.out.printf("\nFirstname=%s\nLastname=%s\nHourly wages=%d\n",lastname,firstname,hourlywages);
        }
    }
}
