#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <fstream>
#include "user.h"

using namespace std;

class venueManager : public user { //inherits from base class user
public:
	venueManager();
	~venueManager();

protected:
	string firstName;
	string secondName;
	string address;
};

venueManager::venueManager() {
	firstName = "";
	secondName = "";
	address = "";
}

venueManager :: ~venueManager() {}
