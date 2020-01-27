

using System;

namespace io{


	public class Print{

		public static void output(Object o){

			Console.WriteLine(o);
		}

		public static string input(string prompt){
			output(prompt);
			return Console.ReadLine();
		}
	}


}


