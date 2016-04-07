// ConsoleApplication2.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
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
{
	bool weitermachen = true;
	while (weitermachen) {
		cout << "Bitte geben sie den Radius des Kreises ein:";
		int r;
		cin >> r;
		double pi = 3.14151;
		double flaeche = pi*exponentialrechnung(r, 2);
		cout << "die Flaeche des Kreises ist " << flaeche << " quadratzentimeter" << endl;

		cout << "Moechten sie auch das Volumen des Zylinder berechnen?" << endl;
		bool allesBerechnen;
		cin >> allesBerechnen;

		if (allesBerechnen) {
			int hoehe;
			cout << "Bitte geben sie die Hoehe des Zylinders ein:";
			cin >> hoehe;
			cout << "Die Hoehe des Zylinders betraegt " << hoehe << " cm." << endl;
			double volumen = flaeche*hoehe;
			cout << "Das Volumen des Zylinders betraegt " << volumen << " kubikzentimeter." << endl;
		}

		cout << "Moechtest du weiter rechnen?";
		cin >> weitermachen;
	}
	system("pause");
	return 0;
}

