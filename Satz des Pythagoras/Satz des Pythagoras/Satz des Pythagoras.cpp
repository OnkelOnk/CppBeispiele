// Satz des Pythagoras.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int exponentialrechnung(int basis, int exponent)
{
	int ergebniss = basis;
	for (int i = 1; i < exponent; i = i + 1) {
		ergebniss = ergebniss * basis;
	}
	return ergebniss;
}

int main()
{// Dirk was ist hier falsch, ich kann die Strecke b nicht eingeben.
	bool Streckea;
	cout << "Bitte geben sie die Strecke a ein:";
	cin >> Streckea;
	bool streckeb;
	cout << "Bitte geben sie die Strecke b ein:";
	cin >> streckeb;
	bool Ergebniss= exponentialrechnung(Streckea, 2);
	bool Endergebniss = Ergebniss + exponentialrechnung(streckeb, 2);
	cout << "Das Ergebnis fuer c2 lautet:" << Endergebniss<<endl;
	system("pause");
    return 0;
}

