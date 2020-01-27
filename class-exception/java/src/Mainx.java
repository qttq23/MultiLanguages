
package src;

import java.util.*;
import myio.*;
import myiofile.*;	

public class Mainx{
	public static void main(String[] args){

		Print.out("Hello world");

		String fname = Print.in("Enter file name");
		// String content = Print.in("Enter file content");

		List<String> lines = new ArrayList<String>();
		lines.add(Print.in("Enter file content"));
		lines.add(Print.in("Enter file content"));

		Filex.writeLines(fname, lines);
		Print.out(Filex.lines(fname));
	}
}



