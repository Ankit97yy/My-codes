package assignment_part2;

public class number5 {
    public static void main(String[] args) {
        manager emp= new manager();
    }
}

class person {
    String name;
    int age;
    person(){}
    person(String name, int age){
        this.name=name;
        this.age=age;
    }
    void display(){
        System.out.println("\nName= "+name+"Age= "+age);
    }
}

class employee extends person {
    int employee_id;
    int years_of_experience;
    employee(){}
    employee(int emp_id,int yoe,int age,String name){
        this.employee_id=emp_id;
        this.years_of_experience=yoe;
        super.name=name;
        super.age=age;
    }
    void display(){
        System.out.println("Employee id= "+employee_id+"\nYears of experience= "+years_of_experience+"\nName= "+name+"Age= "+age);
    }


}

class manager extends employee {
    String department;

    manager(String dep,int emp_id,int yoe,int age,String name){
        super(emp_id,yoe,age,name);
        this.department=dep;
    }
    void display(){
        System.out.println("Department= "+department+"Employee id= "+employee_id+"\nYears of experience= "+years_of_experience+"Age= "+age+"\nName= "+name);
    }
}