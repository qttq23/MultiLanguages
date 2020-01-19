
using System;
using System.IO;

namespace iofile{

	public class Filex{
		public static string read(string filename){
			return File.ReadAllText(filename);
		}

		public static string[] lines(string filename){
			return File.ReadAllLines(filename);
		}

		public static void write(string filename, string msg){
			File.WriteAllText(filename, msg);
		}

		public static void writeLines(string filename, string[] lines){
			File.WriteAllLines(filename, lines);
		}
	}
}

