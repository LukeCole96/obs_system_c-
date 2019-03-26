#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <fstream>

using namespace std;

class show {
public:
	show();
	~show();
	void selectTime();
	void selectShow(string &showName, string &showDate);

protected:
	string showName;
	string showTime;
	string showDate;
};

show::show() {
	showName = "";
	showTime = "";
    showDate = "";
}

show :: ~show() {}

void show :: selectShow(string &showName, string &showDate) {
	char ch;
	char terminator;
	
	system("CLS");

	cout << "Select an upcoming show: " << endl;
	cout << "1. GameBoy of GameBoys (10/11/2019)" << endl;
	cout << "2. Stars in Wars (12/11/2020)" << endl;
	cout << "3. Alooooo (02/04/2019)" << endl;

	cin.clear();
	cin.ignore(100, '\n');
	cout << "Please select a show number: ";
	cin.get(ch);

	while (ch != '1' && ch != '2' && ch != '3') {
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please select a valid show number: ";
		cin.get(ch);
	}

	switch (ch) {
	case '1': showName = "GameBoy of GameBoys", showDate = "10/11/2019"; 
		break;
	case '2': showName = "Stars in Wars", showDate = "12/11/2020"; 
		break;
	case '3': showName = "Alooooo", showDate = "02/04/2019"; 
		break;
	}

	this->showName = showName;
	this->showDate = showDate;
	cin.get(terminator);
}

void show::selectTime() {
	char ch;
	char terminator;

	cout << "Select a time from the following: " << endl;
	cout << "1. 12:45" << endl;
	cout << "2. 13:45" << endl;
	cout << "3. 17:45" << endl;
	cout << "4. 19:00" << endl;

	cin.clear();
	cin.ignore(100, '\n');
	cout << "Please select a allocated time number: ";
	cin.get(ch);

	while (ch != '1' && ch != '2' && ch != '3' && ch != '4') {
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please select a valid time selection number: ";
		cin.get(ch);
	}

	switch (ch) {
	case '1': showTime = "12:45";
		break;
	case '2': showTime = "13:45";
		break;
	case '3': showTime = "17:45";
		break;
	case '4': showTime = "19:00";
		break;
	}

	this->showTime = showTime;
	cin.get(terminator);
}
