abstract class parent {
    abstract void career();

    abstract void partner();
}

class son extends parent {

    @Override
    void career() {
        // TODO Auto-generated method stub
        System.out.println("i want to be a coder");
        
    }

    @Override
    void partner() {
        // TODO Auto-generated method stub
        System.out.println("i love iron man");
        
    }

}

class daughter extends parent {

    @Override
    void career() {
        // TODO Auto-generated method stub
        System.out.println("i want to be doctor");
    }

    @Override
    void partner() {
        // TODO Auto-generated method stub
        System.out.println("i love bts");

    }

}

public class abstract_class {
    public static void main(String[] args) {
        son son= new son();
        daughter daughter= new daughter();
        son.career();
        daughter.career();
    }
}
