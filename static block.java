package practice;


class scale
{
	static
	{
		System.out.println("Control is in Static block under scale class");
		num1 = 0;
		num2 = 0;
	}
	public static int num1;
	public static int num2;
	
	
	public static void disp()
	{
		System.out.println(num1+num2);
	}
}

public class Static {
	
	static
	{
		System.out.println("Control is in Static block under Static class");
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		System.out.println("Control is in main function under Static class");
		scale.disp();

	}

}

============================================================================================
	
	Control is in Static block under Static class
	Control is in main function under Static class
	Control is in Static block under scale class
	0
		
=============================================================================================
