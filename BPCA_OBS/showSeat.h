#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class showSeat {
public:
	showSeat();
	~showSeat();
	void inititialiseFloorPlan();
	int getNumSeats();
	double getSeatSelection();

private:
	void displayFloorPlan(int r, int c);
	void calculatePrice(double &price);

protected:
	char floorPlan[7][6];
	int numSeats;
	int rNum;
	double price;
};

showSeat::showSeat() {
	for (int r = 0; r < 7; r++) {
		for (int c = 0; c < 6; c++) {
			floorPlan[r][c] = '0';
			numSeats = 0;
			rNum = 0;
			price = 0;
		}
	}
}

showSeat::~showSeat() {}

void showSeat::inititialiseFloorPlan() {
	for (int r = 0; r < 7; r++) {
		for (int c = 0; c < 6; c++) {
			floorPlan[r][c] = 'A';
		}
	}
}

int showSeat::getNumSeats() {
	system("CLS");
	cout << "\n*********************************  SELECT SEATS **********" << endl;
	do {
		cin.clear();
		cin.ignore(100, '\n');
		cout << "How many tickets would you like to purchase, it is a max of 8 seats? ";
		cin >> numSeats;
		cout << endl;
	} while (numSeats >= 1 && numSeats <= 8);
	return numSeats;
}