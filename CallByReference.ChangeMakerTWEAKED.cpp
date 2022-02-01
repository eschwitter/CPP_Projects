// CallByReference.ChangeMakerTWEAKED.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int quarter = 25, dime = 10, nickel = 5, penny = 1;

void makeChange(int &t1, int &q1, int &d1, int &n1, int &p1);

int main()
{
	int numQ = 0, numD = 0, numN = 0, numP = 0, total;

	cout << "How much change would you like?\n";
	cin >> total;
	
	
	if (total >= 100 || total <= 0)			//make sure user is only inputing a value that is only change
	{
		cout << "Please choose a value less than $1 but more than $0\n";
	}
	else
	{
		makeChange(total,numQ, numD, numN, numP);
		cout << "Quarters: " << numQ << endl;
		cout << "Dimes: " << numD << endl;
		cout << "Nickels: " << numN << endl;
		cout << "Pennies: " << numP << endl;
	}
}

void makeChange(int &t1,int &q1, int &d1, int &n1, int &p1)
{
	while (t1 >= quarter)		//count # of quarters in total
	{
		t1 = t1 - quarter;
		q1++;
	}
	while (t1 >= dime)		//count # of dimes in total
	{
		t1 -= dime;
		d1++;
	}
	while (t1 >= nickel)		//count # of nickels in total
	{
		t1 -= nickel;
		n1++;
	}
	while (t1 >= penny)		//count # of pennies in total
	{
		t1 -= penny;
		p1++;
	}
}