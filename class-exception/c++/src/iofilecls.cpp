
#include <string>
#include <fstream>
using namespace std;

#include "iofilecls.h"

string iofilecls::read(string filename){

	ifstream fin (filename.c_str(), ios::in);
	string content = "";
	string line;
	if(fin){
		while(getline(fin, line)){
			content += line;
			content += string("\n");
		}
		fin.close();
	}
	else{
		// throw "FileNotFoundException";
		throw MyException("file not found");
	}


	return content;


}
