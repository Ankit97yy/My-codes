import java.util.Scanner;

public class number6 {
    public static void main(String[] args) {
        product[] pro= new product[2];
        int id,rate,quantity;
        String s;
        Scanner sc= new Scanner(System.in);
        System.out.println("enter details of the products");
        for (int i = 0; i < pro.length; i++) {
            System.out.println("enter product name");
            System.out.println("hello");
            s=sc.nextLine();
            System.out.println("enter product id");
            id=sc.nextInt();
            System.out.println("enter product rate");
            rate=sc.nextInt();
            System.out.println("enter product quantity");
            quantity=sc.nextInt();
            pro[i]= new product(s, id, rate, quantity);
            sc.nextLine();
        }
        System.out.println();
        for (int i = 0; i < pro.length; i++) {
            pro[i].display();
        }
        
    }
}
class product{
    int product_id;
    String product_name;
    int rate,quantity;
    product(String name, int id, int rate, int quantity){
            this.product_id=id;
            this.product_name=name;
            this.rate=rate;
            this.quantity=quantity;
    }

    void display(){
        System.out.printf("\nproduct name:%s \n product_id:%d \n rate:%d \n cost=%d\n",product_name,product_id,rate,rate*quantity);
    }
}
 
