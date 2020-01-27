
#include<string>
#include<iostream>
using namespace std;

#include "iocls.h"

void iocls::out(string str){
	cout << str << "\n";
}

iocls::iocls(){
	cout << "cons\n";
}


iocls::~iocls(){
	cout << "des\n";
}

