// BPCA_OBS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "ticket.h"
#include "show.h"
#include "customer.h"
#include "showSeat.h"
#include <string>

int main()
{
	string a, b, c, f, g, h;
	int d;
	double e;
	char ch, terminator;

	showSeat seat;
	customer cust;
	show show;
	ticket * tick;

	cust.getLogin();
	cust.getProfileInfo(f, g, h);

	system("CLS");

	cout << "\n ********************** MAIN MENU *********************************** " << endl;
	cout << "1. buy tickets" << endl;
	cout << "2. log out\n" << endl;
	cout << "Please enter your menu choice";
	cin.get(ch);

	while (ch != '1' && ch != '2') {
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please select a valid menu number";
		cin.get(ch);
	}

	if (ch == '2') {
		return EXIT_SUCCESS;
	}

	do {
		show.selectShow(a, b);
		show.selectTime();

		do {
			cout << "\nAre you happy with your choice (Y) yes or (N) no: ";
			cin.get(ch);
		} while (ch != 'Y' || ch != 'y' && ch != 'N' || ch != 'n'); 
		cin.get(terminator);
	} while (ch == 'N' || ch == 'n');
	seat.inititialiseFloorPlan();
	d = seat.getNumSeats;
	e = seat.getSeatSelection;
}