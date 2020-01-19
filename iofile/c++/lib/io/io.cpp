

#include <iostream>
#include <string>
using namespace std;

	
// get line input
string in(){
	string str = "";
	// cin >> str;
	getline(cin, str);
	return str;
}


void out(string msg){

	cout << msg << endl;
}

string in(string msg){
	out(msg);

	return in();
}