package encrypt;

import java.util.Scanner;

public class ceasor {

	public static void main(String args[])
	{
		char str[];
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the plain text : ");
		str = sc.nextLine().toCharArray();
		int i,key;
		System.out.print("Enter the key : ");
		key = sc.nextInt();
		for(i=0;i<str.length;i++)
		{
			if(Character.isUpperCase(str[i]))
			{
				str[i]=(char)(str[i]+key);
				if(str[i]>'Z')
				{
					str[i]=(char)(str[i]-26);
				}
			}
			else if(Character.isLowerCase(str[i]))
			{
				str[i]=(char)(str[i]+key);
				if(str[i]>'z')
				{
					str[i]=(char)(str[i]-26);
				}
			}
			else
			{
				str[i]=' ';
			}
		}
		System.out.println("The Encypted data will be in the form : "+new String(str));
		for(i=0;i<str.length;i++)
		{
			if(Character.isUpperCase(str[i]))
			{
				str[i]=(char)(str[i]-key);
				if(str[i]<'A')
				{
					str[i]=(char)(str[i]+26);
				}
			}
			else if(Character.isLowerCase(str[i]))
			{
				str[i]=(char)(str[i]-key);
				if(str[i]<'a')
				{
					str[i]=(char)(str[i]+26);
				}
			}
			else 
			{
				str[i]=' ';
			}
			
		}
		System.out.println("The decrypted data willbe in the form : "+new String(str));
	}
}
