package practice;

class A
{
	A get() {
		return this;
	}
	public static void disp()
	{
		System.out.println("Hello class A");
	}
}

class B extends A
{
	B get()
	{
		return this;
	}
	
	public static void display()
	{
		System.out.println("Hello class B");
	}
}

public class Covariant {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new A().get().disp();
		new B().get().display();
	}

}
