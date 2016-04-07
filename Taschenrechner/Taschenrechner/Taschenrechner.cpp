// Taschenrechner.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// bool int double char
	double ersteZahl;
	cin >> ersteZahl;
	char Rechenzeichen;
	cin >> Rechenzeichen;
	double zweiteZahl;
	cin >> zweiteZahl;
	if (Rechenzeichen == '+') {
		double Ergebniss = ersteZahl + zweiteZahl;
		cout << "=" << Ergebniss<<endl;
	}
	if (Rechenzeichen == '-') {
		double ergebniss = ersteZahl - zweiteZahl;
		cout << "=" << ergebniss<<endl;
	}
	if (Rechenzeichen == '*') {
		double Endergebniss = ersteZahl*zweiteZahl;
		cout << "=" << Endergebniss<<endl;
	}
	if (Rechenzeichen == ':') {
		double endergebniss = ersteZahl / zweiteZahl;
		cout << "=" << endergebniss<<endl;
	}
	system("pause");

    return 0;
}

