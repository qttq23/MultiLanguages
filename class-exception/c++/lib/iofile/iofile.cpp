
#include <string>
#include <fstream>
#include <vector>
using namespace std;



string read(string filename){

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


	return content;

}


vector<string> lines(string filename){

	ifstream fin (filename.c_str(), ios::in);
	vector<string> lines;
	string line;
	if(fin){
		while(getline(fin, line)){
			lines.push_back(line);
		}
		fin.close();
	}


	return lines;

}


// write to a file
// delete old content
void write(string filename, string msg){
	ofstream fout;
	fout.open(filename.c_str(), ios::out);

	if(fout.is_open()){
		fout << msg << endl;
		fout.close();
	}

}

// write a line to file
// append the old content
void writeLine(string filename, string line){

	ofstream fout;
	fout.open(filename.c_str(), ios::out|ios::app);

	if(fout.is_open()){
		fout << line << endl;
		fout.close();
	}

}