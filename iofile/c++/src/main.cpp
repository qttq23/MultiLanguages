
#include <iostream>
#include <vector>
using namespace std;

#include "io/io.h"
#include "iofile/iofile.h"



int main(){

	out("Hello thang, enter something");
	string fname = in("enter filename");
	string content = in("enter content");
	write(fname, content);

	writeLine(fname, "this is new content");

	// out(read(fname));
	vector<string> multi = lines(fname);
	for(int i = 0; i < multi.size(); i++){
		out(multi[i]);
	}
	return 0;
}

