import java.util.*; 
import java.util.function.Supplier; 

public class GFG { 
	public static void main(String args[]) 
	{ 

		// For ArrayList 
		List<Integer> list = new ArrayList<Integer>(); 
		list.add(1); 
		list.add(3); 
		System.out.println("ArrayList : " + list.toString()); 

		// For LinkedList 
		List<Integer> llist = new LinkedList<Integer>(); 
		llist.add(2); 
		llist.add(4); 
		System.out.println("LinkedList : " + llist.toString()); 

		// For Stack 
		List<Integer> stack = new Stack<Integer>(); 
		stack.add(3); 
		stack.add(1); 
		System.out.println("Stack : " + stack.toString()); 
	} 
} 
