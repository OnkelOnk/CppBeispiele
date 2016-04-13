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
{
	// Dirk was ist hier falsch, ich kann die Strecke b nicht eingeben.
	/*
	Hallo Ronja. Du hast den falschen Datentyp genommen. Der Datentyp bool kennt nur die Werte True und False bzw. 
	0 und 1. Wenn du jetzt eine Zahl eingiebt die von 0 oder 1 verschienden ist kommt das Programm nicht damit zurecht 
	weil es eine andere Eingabe erwartet. Das ist wie als wenn ich dich bitte Kartoffeln zu schälen und dir statt einem 
	Schälmesser ein Wasserglas in die Hand gebe. Du waerst auch verwirrt und könntest die Aufgabe nicht erledigen. 
	Bis wir dazu kommen warum er die zeite Eingabe ueberspringt kommt erst spaeter. 

	Wir haten bisher folgende Datentypen:
	int : Ganze Zahlen sowohl negativ als auch positiv. z.B. 1, -5, -56. 
	double : Kommazahlen dowohl negativ als auch positiv: 3,2532.
	bool : kennt nur true (englisch fuer Wahr) und false (englisch fuer falsch) oder auch 0 und 1.
	char : Einzelner Buchstabe aus dem alphabet z.B. s,t,i

	Es ist ganz wichtig, dass man immer den richtigen Datentyp nimmt. Versuch es mit den Infos nochmal die Aufgabe zu lösen. 
	Lass dich nicht entmutigen. Diese Fehler sind am Anfang ganz normal. :). Schau auch mal auf die Variable Ergebniss und deren Datentyp.

	Wenn du die Aufgabe bis zum Wochende schaffst können wir gerne wieder telefonieren und ich zeige dir neue Sachen. 
	*/

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

