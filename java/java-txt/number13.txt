import java.util.Scanner;

public class number13 {
    public static void main(String[] args) {
        int real_part;
        int imaginary_part;
        int real_part2;
        int imaginary_part2;
        Scanner sc= new Scanner(System.in);
        System.out.println("enter real part");
        real_part=sc.nextInt();
        System.out.println("enter imaginary part");  
        imaginary_part=sc.nextInt();
        System.out.println("enter real part");
        real_part2=sc.nextInt();
        System.out.println("enter imaginary part");  
        imaginary_part2=sc.nextInt();
        complex com=new complex(real_part, imaginary_part, real_part2, imaginary_part2);
        com.sum();
        com.diffrence();
        com.product();
    }
    
}
class complex{
    int real_part;
    int imaginary_part;
    int real_part2;
    int imaginary_part2;
    complex(int r1, int i1, int r2, int i2){
        real_part=r1;
        imaginary_part=i1;
        real_part2=r2;
        imaginary_part2=i2;
    }
    void sum(){
        System.out.printf("sum=%d+i(%d)\n",real_part+real_part2,imaginary_part+imaginary_part2);
    }
    void diffrence(){
        System.out.printf("difference=%d+i(%d)\n",real_part-real_part2,imaginary_part-imaginary_part2);
    }
    void product(){
        System.out.printf("product=%d+i(%d)\n",((real_part*real_part2)-(imaginary_part*imaginary_part2)),(real_part*imaginary_part2)+(imaginary_part*real_part2));
    }
}
