#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <fstream>
#include "user.h"

using namespace std;

class agent : public user { //inherits from base class user
public:
	agent();
	~agent();

protected:
	string firstName;
	string secondName;
	string address;
};

agent::agent() {
	firstName = "";
	secondName = "";
	address = "";
}

agent :: ~agent() {}
