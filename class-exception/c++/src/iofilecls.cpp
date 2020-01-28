
#include <string>
#include <fstream>
using namespace std;

#include "iofilecls.h"

string iofilecls::read(string filename) throw (MyException){

	ifstream fin (filename.c_str(), ios::in);
	string content = "";
	string line;
	if(fin){
		try{
			while(getline(fin, line)){
				content += line;
				content += string("\n");
			}
			fin.close();

		}
		catch(...){
			fin.close();
			throw MyException("read file error");
		}

	}
	else{
		// throw "FileNotFoundException";
		throw MyException("file not found");
	}


	return content;


}
