package assignment_part2;

import java.util.Scanner;

import javax.sql.rowset.spi.SyncResolver;

public class number2 {
    public static void main(String[] args) {
        String s="";
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a department or leave it blank");
        s=sc.nextLine();
        employee emp=new employee(s);

    }
}

class employee {
    employee(String s) {
        if(s.length()==0) System.out.println("Not assigned");
        else System.out.println("department is "+s);
    }
}
