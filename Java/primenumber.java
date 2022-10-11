import java.util.Scanner;
class primenumber{


	public static void main(String args[])
	{
		int num=0,count=0;
		Scanner sc = new Scanner(System.in);
		num=sc.nextInt();
		int d=num/2;
		for(int i=2;i<d;i++)
		{
			if(num%i==0)
			{
				System.out.println("number is not prime");
				count=1;
				break;
				
				
			}
		}
		if(count==0)
		{
			System.out.println("number  is prime");
			
		}

	}
}