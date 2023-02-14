// BinaerWandler.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int dez = 192;
	int erg;
	int bin;
	string zeichenfolge ="";

	do{
		erg = dez / 2;
		bin = dez % 2;
		if (bin == 1) zeichenfolge.insert(0, "1");
		else zeichenfolge.insert(0, "0");
		dez = erg;	
	} while (erg > 0);	

	cout << zeichenfolge;
	return 0;	
}