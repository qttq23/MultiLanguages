
#include <exception>
#include <string>
using namespace std;

class MyException: public exception{
private:
	string msg;
public:
	MyException(string msg){
		this->msg = msg;
	}
	~MyException() throw (){

	}

	const char* what() const throw(){
		return msg.c_str();
	}
};