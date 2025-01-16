#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <iostream>

using namespace std;

class invalidInput : public exception{
private:
	string message;
public:
	invalidInput(){
		message = "please Enter a valid amount";
	}
	//invalidInput()
	

};

#endif 