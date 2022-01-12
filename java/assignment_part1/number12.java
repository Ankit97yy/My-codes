public class number12 {
    public static void main(String[] args) {
        triangle tri= new triangle();
        tri.x=3;
        tri.y=4;
        tri.z=5;
        System.out.println("area of the triangle= "+""+tri.area());
        System.out.println("perimeter of the triangle="+""+tri.perimeter());
    }
}
class triangle{
    int x,y,z;
    int perimeter(){
        return x+y+z;
    }
    double area(){
        double s=(x+y+z)/2;
        return Math.sqrt(s*(s-x)*(s-y)*(s-z));
    }
}
