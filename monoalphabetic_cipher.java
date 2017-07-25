import java.util.Scanner;

public class monoalphabetic_cipher {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String plaintext ,ciphertext="",decrypt="";
		String smallKey = "efghijklmnopqrstuvwxyzabcd";
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Plain text : ");
		plaintext = sc.nextLine();
		int i,len;
		len = plaintext.length();
		for(i=0;i<len;i++)
		{
			if(plaintext.charAt(i)%65<26)
			{
				int x = plaintext.charAt(i)%65;
				ciphertext +=Character.toUpperCase( smallKey.charAt(x));
			}
			else if(plaintext.charAt(i)%97<26)
			{
				int x = plaintext.charAt(i)%97;
				ciphertext += smallKey.charAt(x);
			}
			else
			{
				ciphertext += plaintext.charAt(i);
			}
		}
		System.out.println("Cipher Text is : "+ciphertext);
		for(i=0;i<len;i++)
		{
			if(ciphertext.charAt(i)%65<26)
			{
				
				int temp =smallKey.indexOf(Character.toLowerCase(ciphertext.charAt(i)));
				decrypt += (char)(temp + 'A');				
			}
			else if(ciphertext.charAt(i)%97<26)
			{
				int temp = smallKey.indexOf(ciphertext.charAt(i));
				decrypt += (char)(temp + 'a');				
			}
			else
			{
				decrypt += ciphertext.charAt(i);
			}
		}
		System.out.println("Decrypted text : "+decrypt);
	}

}
