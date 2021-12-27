public class inter{
	public static void main(String[] args){
		student ss= new student();
		ss.play();
		ss.show();
	}
}
interface some{
	void play();
}
class student implements some{
	public void play(){
		System.out.println("i am playing");
	}
	void show(){
		System.out.println("i am in third standard");
	}
}
