import java.util.Scanner;

class fibonacci{
		public static void main(String args[])
		{
			int n1=1,n2=1,n3;
			int range;
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter a range");
			range=sc.nextInt();
			System.out.print(n1);
			System.out.print(n2);
			while(range>2)
			{
				n3=n1+n2;
				System.out.print(n3);
				n1=n2;
				n2=n3;
				range--;	
			}
		
		}
}