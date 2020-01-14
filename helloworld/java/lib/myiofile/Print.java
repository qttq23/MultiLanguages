
package myiofile;

import java.util.*;
import java.io.*;

import myiofile.log.*;
public class Print{

	public static void out(Object o){
		

		String s = o.toString();
		try(RandomAccessFile raf = new RandomAccessFile(
			"text.txt", "rw"
			))
		{
			raf.writeBytes(s);
		}
		catch(Exception ex){
			ex.printStackTrace();
		}
		
		Log.out("Write to file done.");
	}
}

