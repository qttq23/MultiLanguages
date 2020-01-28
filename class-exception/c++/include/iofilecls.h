
#include <string>
using namespace std;


#include "MyException.h"

class iofilecls{

public:
	string read(string filename) throw (MyException);
};


