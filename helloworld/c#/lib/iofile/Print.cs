

using System;
using iofile.log;

namespace iofile{


	public class Print{

		public static void output(Object o){

			Log.output("New output from log - " + o.ToString());
		}
	}
}


