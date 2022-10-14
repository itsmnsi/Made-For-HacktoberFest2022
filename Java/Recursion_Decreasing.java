package Java;

public class Recursion_Decreasing {
    public static void PrintDec(int n) {
        if (n == 1) {
            System.out.println("n = 1");
            return;
        }
        System.out.println(n + " ");
        PrintDec(n - 1);

    }

    public static void main(String args[]) {
        PrintDec(10);
    }
}