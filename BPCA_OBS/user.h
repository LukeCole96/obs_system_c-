#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <fstream>

using namespace std;

class user {
public:
	user();
	~user();
	void getLogin();
	void getProfileInfo(string &firstName, string &secondName, string &address);

protected:
	string firstName;
	string secondName;
	string address;
};

user::user() {
	firstName = "";
	secondName = "";
	address = "";
}

user :: ~user() {}

void user::getLogin() {
	string userName; //write to file as a refactor
	string password;

	cout << "\n**************** LOGIN OBS *****************" << endl;
	cout << "\n**************** Welcome to Bucks Centre for the Performing Arts Ticket purchasing portal." << endl;
	cout << "Please login." << endl;

	cout << "Enter username: ";
	getline(cin, userName);

	while (userName.length() > 10) {
		cout << "Your username should be no more than 10 characters long." << endl;
		cout << "Please re-enter your username: ";
		getline(cin, userName);
	}

	cout << "Enter password: ";
	getline(cin, password);

	while (password.length() > 10) {
		cout << "Your password should be no more than 10 characters long." << endl;
		cout << "Please re-enter your password: ";
		getline(cin, password);
	}
}

void user::getProfileInfo(string &firstName, string &secondName, string &address) {
	string check;
	char terminator;
	while (check != "y" || check != "Y") {
		cout << "\n**************** OBS PROFILE INFO *****************" << endl;
		cout << "please update your following details: " << endl;
		cout << "Please enter your first name: ";
		getline(cin, firstName);
		cin.get(terminator);
		cout << "Please enter your second name: ";
		getline(cin, secondName);
		cin.get(terminator);
		cout << "Please enter your address: ";
		getline(cin, address);
		cin.get(terminator);

		cout << "Are you happy with the confirmed information?" << endl;
		cout << "Y = yes, N = no" << endl;
		getline(cin, check);
	}
	writeToFile(firstName, secondName, address);
}

void writeToFile(string &firstName, string &secondName, string &address) {
	ofstream file;
	file.open("user-" + firstName + "_" + secondName);
	file << firstName;
	file << secondName;
	file << address;
	printFile(firstName, secondName);
	file.close();
}

void printFile(string &firstName, string &secondName) {
	ifstream file("user-" + firstName + "_" + secondName);
	string line;

	if (file.is_open) {
		cout << "Your details are as follows: " << endl;
		cout << "***************** SUMMARY OF USER INFO ***************" << endl;
		while (getline(file, line)) {
			cout << line << '\n';
		}
		file.close();
	}
	else cout << "Unable to open the file...";
}