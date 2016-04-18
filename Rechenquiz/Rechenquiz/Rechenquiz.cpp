// Rechenquiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


double Rechnung1(double Zahl1, double Zahl2){
 bool weitermachen = true;
 int Punkte;
 while (weitermachen){
	 double beispiel;
	 cout << Zahl1 << "+" << Zahl2 << endl;
	cin >> beispiel;
	if (beispiel == Zahl1+Zahl2) {
		cout << "Richtig gerechnet:-)" << endl;
	weitermachen = false;
	// Was bedeutet die Fehlermeldung: The variable 'Punkte' is being used without being initialized.
	Punkte = Punkte + 10;
	}
	if (beispiel != Zahl1 + Zahl2) {
		cout << "Leider falsch! Versuchs nochmal." << endl;
		if (beispiel < Zahl1 + Zahl2) {
			cout << "Du hast eine zu kleine Zahl eingegeben." << endl;
		}
		if (beispiel > Zahl1 + Zahl2){
			cout << "du hast eine zu große Zahl engegeben." << endl;
		}
		weitermachen = true;
		Punkte = Punkte - 5;
	};
	cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
	
	}
 return Punkte;
}

double Rechnung2(double Zahl1, double Zahl2) {
	bool weitermachen = true;
	int Punkte;
	while (weitermachen) {
		double beispiel;
		cout << Zahl1 << "-" << Zahl2 << endl;
		cin >> beispiel;
		if (beispiel == Zahl1 - Zahl2) {
			cout << "Richtig gerechnet:-)" << endl;
			weitermachen = false;
			Punkte = Punkte + 10;
		}
		if (beispiel != Zahl1 - Zahl2) {
			cout << "Leider falsch! Versuchs nochmal." << endl;
			if (beispiel < Zahl1 - Zahl2) {
				cout << "Du hast eine zu kleine Zahl eingegeben." << endl;
			}
			if (beispiel > Zahl1 - Zahl2) {
				cout << "du hast eine zu große Zahl engegeben." << endl;
			}
			weitermachen = true;
			Punkte = Punkte - 5;
		};
		cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
		
	}
	return Punkte;
}

double Rechnung3(double Zahl1, double Zahl2) {
	bool weitermachen = true;
	int Punkte;
	while (weitermachen) {
		double beispiel;
		cout << Zahl1 << "*" << Zahl2<<endl;
		cin >> beispiel;
		if (beispiel == Zahl1 * Zahl2) {
			cout << "Richtig gerechnet:-)" << endl;
			weitermachen = false;
			Punkte = Punkte + 10;
		}
		if (beispiel != Zahl1 * Zahl2) {
			cout << "Leider falsch! Versuchs nochmal." << endl;
			if (beispiel < Zahl1 * Zahl2) {
				cout << "Du hast eine zu kleine Zahl eingegeben." << endl;
			}
			if (beispiel > Zahl1 * Zahl2) {
				cout << "du hast eine zu große Zahl engegeben." << endl;
			}
			weitermachen = true;
			Punkte = Punkte - 5;
		};
		cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
	
	}
	return Punkte;
}
double Rechnung4(double Zahl1, double Zahl2) {
	bool weitermachen = true;
	int Punkte;
	while (weitermachen) {
		double beispiel;
		cout << Zahl1 << ":" << Zahl2 << endl;
		cin >> beispiel;
		if (beispiel == Zahl1 / Zahl2) {
			cout << "Richtig gerechnet:-)" << endl;
			weitermachen = false;
			Punkte = Punkte + 10;
		}
		if (beispiel != Zahl1 / Zahl2) {
			cout << "Leider falsch! Versuchs nochmal." << endl;
			if (beispiel < Zahl1 / Zahl2) {
				cout << "Du hast eine zu kleine Zahl eingegeben." << endl;
			}
			if (beispiel > Zahl1 / Zahl2) {
				cout << "du hast eine zu große Zahl engegeben." << endl;
			}
			weitermachen = true;
			Punkte = Punkte - 5;
		};
		cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
		
	}
	return Punkte;
}

int main()
{
	int Punkte = 0;
	Rechnung1(64, 58);
	Rechnung4(27, 3);
	Rechnung3(7, 3);
	Rechnung2(56, 47);
	Rechnung3(5, 7);
	if (Punkte >= 40) {
		Rechnung1(48, 37);
		Rechnung2(36, 6);
		Rechnung4(48, 8);
		Rechnung3(8, 3);
		Rechnung3(5, 9);
	}
	system("pause");
    return 0;
}

