
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "io/io.h"
#include "iofile/iofile.h"


#include "iocls.h"
#include "iofilecls.h"

#include "A.h"
#include "B.h"

int main(){


	// {
	// 	// iocls* io = new iocls();
	// 	// io->out("Hello from io class");

	// 	iocls io2;
	// 	io2.out("Hello from io class 2");
		

	// 	iofilecls iof;
	// 	try{
	// 		io2.out(iof.read("thang2.txt"));
	// 	}
	// 	catch(MyException& ex){
	// 		io2.out(ex.what());
	// 	}
	// 	catch(...){
	// 		io2.out("unknown exception");
	// 	}

	// }
	// out("out of section");

	{
		A a;
		a.name = "school";
		a.b = new B();
		a.b->name = "student";

		cout << a.name << endl;
		cout << a.b->name << endl;

	}
	out("out of test circle section");

	return 0;
}

