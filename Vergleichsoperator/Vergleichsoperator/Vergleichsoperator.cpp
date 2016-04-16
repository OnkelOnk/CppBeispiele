// Vergleichsoperator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "5+7" << endl;
	int beispiel;
	cin >> beispiel;
	if (beispiel == 12) {
		cout << "Richtig gerechnet:-)" << endl;
	}
	if (beispiel != 12) {
		cout << "Leider falsch! Versuchs nochmal."<< endl;
		if (beispiel < 12) {
			cout << "Du hast eine zu kleine Zahl eingegeben."<< endl;
		} 
		else {
			cout << "du hast eine zu große Zahl engegeben."<< endl;
		}
	} 

	

	system("pause");
    return 0;
}

