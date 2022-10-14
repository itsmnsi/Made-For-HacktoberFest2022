import java.util.Scanner;
 
class Palindrome {
    public static void main(String[] args) {
        Scanner SC=new Scanner(System.in);
        System.out.println("Kindly enter a string to check if it is a palindrome or not");
        String in= SC.nextLine();
        //checking whether palindrome or not
        if(ispalindrome(in))
        {
            System.out.println(in+" is a palindrome");
        }
        else
        {
            System.out.println(in+" is not a palindrome");
        }
    }
 
    public static boolean ispalindrome(String str) {
        int left = 0, right = str.length() - 1;
        
        while(left < right)
        {
            if(str.charAt(left) != str.charAt(right))
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    } 
}
