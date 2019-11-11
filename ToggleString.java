package sample;

import java.util.Scanner;

public class ToggleString {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		
		String st = sc.nextLine();
	
		
		String [] str = st.split(" ");
		
		int length = str.length;
		
		for(int i =0 ; i<length;i++)
		{
			System.out.print(str[i].substring(0,1).toUpperCase()+str[i].substring(1)+" ");	
			//System.out.print(str[i].substring(0,1).toLowerCase()+str[i].substring(1).toUpperCase()+" ");
		}
		System.out.println();
		for(int i = length-1;i>=0;i--)
		{
			StringBuffer s = new StringBuffer(str[i]);
			System.out.print(s.reverse()+" ");
		}
		
		sc.close();

	}

}
