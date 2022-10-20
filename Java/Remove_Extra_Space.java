import java.util.Scanner;  // Import the Scanner class

public class Main
{
	public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);  // Create a Scanner object
    String s=sc.nextLine();
    System.out.println(s.replaceAll("\\s+"," ").trim());
 
}
}
