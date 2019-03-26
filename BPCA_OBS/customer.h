#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <fstream>
#include "user.h"

using namespace std;

class customer: public user { //inherits from base class user
public:
	customer();
	~customer();

protected:
	string firstName;
	string secondName;
	string address;
};

customer::customer() {
	firstName = "";
	secondName = "";
	address = "";
}

customer :: ~customer() {}
