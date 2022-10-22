import java.util.Scanner;  // Import the Scanner class

public class Main
{
	public static void main(String[] args) {
	    
	Scanner sc = new Scanner(System.in);  // Create a Scanner object
    String s=sc.nextLine();
  
for (int i=s.length()-1;i>=0;i--){
    char ch= s.charAt(i);
 System.out.print(ch); 
   
}  
}
}
