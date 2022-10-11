import java.util.Scanner;

public class reverseString
{

	public static void main(String args[])
	{
		String result="";
		Scanner sc =new Scanner(System.in);
		String str = sc.nextLine();
		char ch[]=str.toCharArray();

		for(int i=ch.length-1;i>=0;i--)
		{
			result+=ch[i];
		}
		
		System.out.println("Reversed String "+result);
	}


}