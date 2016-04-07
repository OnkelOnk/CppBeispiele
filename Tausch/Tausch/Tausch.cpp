// ConsoleApplication4.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;


int main()
{
	int ersteZahl;
	int zweiteZahl;

	cout << "Erste Zahl:  ";
	cin >> ersteZahl;
	cout << "Zweite Zahl: ";
	cin >> zweiteZahl;
	cout << endl;
	int help = ersteZahl;
	ersteZahl = zweiteZahl;
	zweiteZahl = help;
	cout << "Erste Zahl: " << ersteZahl << endl;
	cout << "Zweite Zahl: " << zweiteZahl << endl;


	system("pause");
	return 0;
}

