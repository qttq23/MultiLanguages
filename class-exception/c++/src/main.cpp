
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "io/io.h"
#include "iofile/iofile.h"


#include "iocls.h"
#include "iofilecls.h"


int main(){

	// out("Hello thang, enter something");
	// string fname = in("enter filename");
	// string content = in("enter content");
	// write(fname, content);

	// writeLine(fname, "this is new content");

	// // out(read(fname));
	// vector<string> multi = lines(fname);
	// for(int i = 0; i < multi.size(); i++){
	// 	out(multi[i]);
	// }

	{
		// iocls* io = new iocls();
		// io->out("Hello from io class");

		iocls io2;
		io2.out("Hello from io class 2");
		

		iofilecls iof;
		try{
			io2.out(iof.read("thang2.txt"));
		}
		catch(MyException& ex){
			io2.out(ex.what());
		}
		catch(...){
			io2.out("unknown exception");
		}

	}
	out("out of section");

	return 0;
}

