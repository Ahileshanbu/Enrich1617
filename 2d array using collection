package sample;

import java.util.*;

public class Twodarray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		ArrayList <ArrayList <Integer>> arr = new ArrayList<ArrayList <Integer>>();
		
		int num;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the row and col: ");
		num = sc.nextInt();
		
		for(int i = 0;i<num;i++)
		{
			arr.add(new ArrayList<Integer>());
			for(int j = 0;j<num;j++)
			{
				arr.get(i).add(sc.nextInt());
			}
		}
		
		for(int i =0 ; i< num;i++)
		{
			for(int j = 0; j<num;j++)
			{
				System.out.print(arr.get(i).get(j)+" ");
			}
			System.out.println();
		}
		
		int row,col,val;
		
		System.out.print("Enter the row col and value");
		
		row = sc.nextInt();
		col = sc.nextInt();
		val = sc.nextInt();
		
		int flag = 0;
		
		for(int i = 0;i<num;i++)
		{
			if(arr.get(i).get(col)== val||arr.get(row).get(i)==val)
			{
				flag = 1;
				break;
			}
		}
		
		if(flag == 0)
		{
			System.out.println("Correct");
		}
		else
		{
			System.out.println("Not Correct");
		}
		sc.close();

	}

}
