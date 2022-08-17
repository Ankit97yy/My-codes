interface checking{
    void check(int x);
}
class check_palindrome implements checking{
    public void check(int x){
        int pal=0;
        int temp=x;
        while(temp!=0){
            int rem=temp%10;
            int digit=(int)Math.floor(Math.log10(temp))+1;
            pal+=(int)Math.pow(10,digit-1)*rem;
            temp/=10;
        }
        System.out.println(pal);
        if(x==pal) System.out.println("it's a palindrome");
        else System.out.println("its not palindrome");
    }
}
class check_odd_even implements checking{

    public void check(int x) {
        System.out.println(x);
        if(x%2==0) System.out.println("even");
        else System.out.println("odd");
    }

}
public class result{
   public static void main(String[] args) {
    check_odd_even A= new check_odd_even();
    check_palindrome B= new check_palindrome();
    // A.check(123);
    B.check(121);
   }
}