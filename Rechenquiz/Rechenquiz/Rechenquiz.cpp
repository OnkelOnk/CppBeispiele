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
	cout << "dein Punktestand betraegt " << Punkte << " Punkte" << endl;
	
	}
 return Punkte;
}

double Subtraktion(double Zahl1, double Zahl2) {
	bool weitermachen = true;
	double Punkte;
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

double Multiplikation(double Zahl1, double Zahl2) {
	bool weitermachen = true;    
	double Punkte;
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
double Division(double Zahl1, double Zahl2) {
	bool weitermachen = true;
	double Punkte;
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
{ /*Hier beginnt der Block der main Funktion*/
	
	/*
	Hallo Ronja. Das sieht schon echt gut aus hat aber noch Fehler. Die Variable Punkte wird nicht richtig verwendet. 
	Das liegt an den sogenannten Gueltigkeitsbereichen. Eine Variable ist nur innerbalb ihres Blocks und in allen 
	Bloecken die dieser enthaelt definiert. Ein Block ist alles was in diesen Klammern steht: {}.
	Das bedeutet, dass die Variable int Punkte in dieser Funktion auch nur in dieser Funktion bekannt ist. Du hast eine Variable 
	mit dem gleichen Namen in deinen vier Funktionen. Diese haben den Gleichen Namen sind aber immer eine andere Variable, die nur 
	innerhalb dieser Funktion bekannt ist. 
	Die Idee die Punkte als Rueckgabewert der Funktion zu machen ist sehr gut. Dann muss der Aufruf aber wiefolgt ausehen: 
	Punkte = Punkte + Rechnung1(64, 58);
	Dadurch wirde der Rueckgabewert korrekt gespeichert. Du hast wieder die Datentypen etwas durcheinder gebracht. Schau da nochmal 
	drauf. 
	*/
	double Punkte = 0;
	Punkte = Punkte + Addition(64, 58);
	Punkte = Punkte + Division(27, 3);
	Punkte = Punkte + Multiplikation(7, 3);
	Punkte = Punkte + Subtraktion(56, 47);
	Punkte = Punkte + Multiplikation(5, 7);
	if (Punkte >= 40) {
		/*
		Das ist ein Unterblock der Funktion main. Die Variable int Punkte ist hier also auch bekannt. 
		*/
		Punkte= Punkte + Addition(48, 37);
		Punkte = Punkte + Subtraktion(36, 6);
		Punkte = Punkte + Division(48, 8);
		Punkte = Punkte + Multiplikation(8, 3);
		Punkte = Punkte + Multiplikation(5, 9);  
	}
	system("pause");
    return 0;
/*Hier endet der Block der main Funktion*/}

