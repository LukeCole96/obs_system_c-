#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class ticket {
public: 
	ticket();
	~ticket();
	void setPrice(double price);
	void printTicket(string showName, string showDate, string showTime, int numSeats, string fName, string sName, string address);
	virtual double cost() = 0;
protected: 
	double totalCost;
};

ticket::ticket() {
	totalCost = 0;
}

ticket :: ~ticket(){}

void ticket::setPrice(double price) {
	totalCost = price;
	cout << "\n The total price of your tickets (including any applicable discount) is " << (char)156 << this->cost() << '.\n' << endl;
	system("PAUSE");
}

void ticket::printTicket(string showName, string showDate, string showTime, int numSeats, string fName, string sName, string address) {
	system("CLS");
	cout << "\n******************* YOUR TICKETS ****************" << endl;
	cout << "Show you are seeing:" << showName << endl;
	cout << "On: " << showDate << " at" << showTime << endl;
	cout << "===================================================" << endl;
	cout << "Number of seats: " << numSeats << endl;
	cout << "Total cost: " << (char)156 << this->cost() << endl;
	cout << "Ticket Purchaser: " << fName << " " << sName << endl;
	cout << "Postal address is: " << address << endl;
	cout << "****************************************************" << endl;
}