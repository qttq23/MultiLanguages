
package myiofile;

import java.util.*;
import java.io.*;
import java.nio.file.*;
import java.nio.charset.*;

public class Filex{

	public static String read(String filename){

		String res = null;

		try{
			byte[] bytes = Files.readAllBytes(Paths.get(filename));
			res = new String(bytes);
		}
		catch(Exception ex){
			ex.printStackTrace();
		}


		return res;

	}

	public static List<String> lines(String filename){

		List<String> res = null;

		try{
			res = Files.readAllLines(Paths.get(filename));
		}
		catch(Exception ex){
			ex.printStackTrace();
		}


		return res;

	}

	public static void write(String filename, String content){

		try{
			Files.write(Paths.get(filename), content.getBytes());
		}
		catch(Exception ex){
			ex.printStackTrace();
		}

	}

	public static void writeLines(String filename, List<String> lines){

		try{

			Files.write(Paths.get(filename), lines, Charset.forName("UTF-8"));
		}
		catch(Exception ex){
			ex.printStackTrace();
		}

	}

}


