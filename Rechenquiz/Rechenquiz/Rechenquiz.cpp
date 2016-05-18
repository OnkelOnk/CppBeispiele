// Rechenquiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int aufgabe(double valueA, double valueB, char typ)
{
	double ergebnis = 0;
	//hier wird aus dem Rechenzeichen immer plus. weshalb könntest du mal darüber schauen. Ich habe keine Ahnung mehr.
	if (typ = '+') {
		ergebnis = valueA + valueB;
	} else if (typ = '-') {
		ergebnis = valueA - valueB;
	} else if (typ = '*') {
		ergebnis = valueA*valueB;
	} else if (typ = ':'){
		ergebnis = valueA / valueB;
	}else {
		cout << "Rechenart nicht bekannt" << endl;
		return 0;
	}

	bool weitermachen = true;
	int Punkte = 0;
	while (weitermachen) {
		double eingabe;
		cout << valueA << typ << valueB << endl;
		cin >> eingabe;
		if (eingabe == ergebnis) {
			cout << "Richtig gerechnet:-)" << endl;
			weitermachen = false;
			Punkte = Punkte + 10;
		}
		if (eingabe != ergebnis) {
			cout << "Leider falsch! Versuchs nochmal." << endl;
			if (eingabe < ergebnis) {
				cout << "Du hast eine zu kleine Zahl eingegeben." << endl;
			}
			if (eingabe > ergebnis) {
				cout << "du hast eine zu große Zahl engegeben." << endl;
			}
			weitermachen = true;
			Punkte = Punkte - 5;
		};
	}
	return Punkte;
}


int main()
{ 
	// Das Programm stellt nur plus Aufgaben.

	int Punkte = 0;

	bool weitermachen=true;
	while (weitermachen) {
		Punkte = Punkte + aufgabe(rand() % 100, rand() % 100, '+');
		Punkte = Punkte + aufgabe(rand() % 100, rand() % 100, '-');
		Punkte = Punkte + aufgabe(rand() % 10, rand() % 10, '*');
		Punkte = Punkte + aufgabe(rand() % 100, rand() % 100, '/');
		cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl ;
		cout << "Moechtest du weitermachen? 0=nein 1=ja" <<endl ;
		cin >> weitermachen;
	}



	system("pause");
    return 0;
}

