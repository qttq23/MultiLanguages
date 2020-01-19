
using io;
using iofile;

namespace src{

	public class MainProgram{

		public static void Main(string[] args){
			
			Print.output("my code...");
			string fname = Print.input("enter filename");
			string content = Print.input("enter content");

			Filex.write(fname, content);
			Print.output(Filex.read(fname));

			// string[] lines = Filex.lines("readme.txt");
			// foreach(var line in lines){

			// 	Print.output(line);
			// }
			// Filex.writeLines("thang.txt", lines);


		}
	}
}


