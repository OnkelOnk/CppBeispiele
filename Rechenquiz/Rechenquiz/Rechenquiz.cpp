// Rechenquiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


double Addition(double Zahl1, double Zahl2){
 bool weitermachen = true;
 double Punkte = 0;
 while (weitermachen){
	 double beispiel;
	 cout << Zahl1 << "+" << Zahl2 << endl;
	cin >> beispiel;
	if (beispiel == Zahl1+Zahl2) {
		cout << "Richtig gerechnet:-)" << endl;
	    weitermachen = false;
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
	
	
	}
 return Punkte;
}

double Subtraktion(double Zahl1, double Zahl2) {
	bool weitermachen = true;
	double Punkte=0;
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
			
	}
	return Punkte;
}

double Multiplikation(double Zahl1, double Zahl2) {
	bool weitermachen = true;    
	double Punkte=0;
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
		
	}
	return Punkte;
}
double Division(double Zahl1, double Zahl2) {
	bool weitermachen = true;
	double Punkte=0;
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
	
		
	}
	return Punkte;
}

int aufgabe(double valueA, double valueB, char typ)
{
	double ergebnis = 0;
	if (typ = '+') {
		ergebnis = valueA + valueB;
	} else if (typ = '-') {
		ergebnis = valueA - valueB;
	} else {
		cout << "Rechenart nicht bekannt" << endl;
		return 0;
	}

	bool weitermachen = true;
	double Punkte = 0;
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

	// 1. Datentyp für Piunkte einheitlich auf int
	// 2. Funtion aufgabe um rechenarten erweiteren
	// 3. Program so erweitern das es beliebig viele Aufaghen stellt. Nach jeweils vier Aufgaben wir dgefragt ob man weiter rechnen möchte. 

	int Punkte = 0;


	while (true) {
		Punkte = Punkte + aufgabe(rand() % 100, rand() % 100, '+');
		cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
	}



	Punkte = Punkte + Addition(64, 58);
	cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
	Punkte = Punkte + Division(27, 3);
	cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
	Punkte = Punkte + Multiplikation(7, 3);
	cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
	Punkte = Punkte + Subtraktion(56, 47);
	cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
	Punkte = Punkte + Multiplikation(5, 7);
	cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
	if (Punkte >= 40) {
		/*
		Das ist ein Unterblock der Funktion main. Die Variable int Punkte ist hier also auch bekannt. 
		*/
		Punkte= Punkte + Addition(48, 37);
		cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
		Punkte = Punkte + Subtraktion(36, 6);
		cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
		Punkte = Punkte + Division(48, 8);
		cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
		Punkte = Punkte + Multiplikation(8, 3);
		cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
		Punkte = Punkte + Multiplikation(5, 9);  
		cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
	}
	system("pause");
    return 0;
/*Hier endet der Block der main Funktion*/
}

