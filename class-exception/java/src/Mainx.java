
package src;

import java.util.*;
import myio.*;
import myiofile.*;	

import src.pkgA.*;
import src.pkgB.*;

public class Mainx{
	public static void main(String[] args){

		// Print.out("Hello world");

		// String fname = Print.in("Enter file name");
		// // String content = Print.in("Enter file content");

		// List<String> lines = new ArrayList<String>();
		// lines.add(Print.in("Enter file content"));
		// lines.add(Print.in("Enter file content"));

		// Filex.writeLines(fname, lines);
		// Print.out(Filex.lines(fname));

		A a = new A();
		a.name = "school";
		a.b = new B();
		a.b.name = "student";
		a.b.a = new A();
		a.b.a.name = "at school";

		a.dosth();
		a.b.dosth();

		System.out.println(a.name);
		System.out.println(a.b.name);
		System.out.println(a.b.a.name);

	}
}



