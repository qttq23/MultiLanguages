
package myio;

import java.util.*;

public class Print{

	public static void out(Object o){
		System.out.println(o);
	}

	public static String in(String prompt){
		out(prompt);
		Scanner scanner = new Scanner(System.in);
		return scanner.nextLine();
	}
}

