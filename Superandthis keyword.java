package practice;

class Shape
{
	private int n1,n2;
	
	Shape()
	{
		n1 = 0;
		n2 = 0;
	}
	
	Shape(int n1)
	{
		this();
	}
	
	Shape(int n1,int n2)
	{
		this.n1 = n1;
		this.n2 = n2;
	}
	
	public int disp()
	{
		System.out.println("Object is in Base class");
		return n1+n2;
	}
	
}

class Rectangle extends Shape
{
	Rectangle()
	{
		super();
	}
	Rectangle(int n1)
	{
		super(n1);
	}
	Rectangle(int n1,int n2)
	{
		super(n1,n2);
	}
	public void display()
	{
		System.out.println(this.disp());
	}
}

public class SuperThis {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Rectangle r = new Rectangle();
		r.disp();
		r = new Rectangle(4);
		r.display();
		r = new Rectangle(4,5);
		r.display();
	}

}


================================================================================================

Object is in Base class
Object is in Base class
0
Object is in Base class
9

=================================================================================================
