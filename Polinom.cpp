// Yağızcem CENGİZ

#include "Polinom.h"
#include <iostream>
#include <cmath>
using namespace std;


// Main.cpp de tanımladığımız değişkenleri güncellemek için bu fonksiyondaki veri tiplerine atıyoruz.
void Polinom::KatsayilaraDegerAta(int a1, int b1, int c1) 
{
	a = a1;
	b = b1;
	c = c1;
}
//---------------------------------------------------------------------------------------


//Buradaki fonksiyonumuzda y yi bulduruyoruz. x i katsayiya esitliyoruz.
int Polinom::DegerHesapla(int katsayi)
{
	x = katsayi;
	int y = a * pow(x, 2) + b * x + c;
	
	return y;
}
//---------------------------------------------------------------------------------------


// En başta Deltayı bulmak için gereken formülümüzü yazdırıyoruz. Daha sonra if , else if , else yapısıyla köklerimizi bulup yazdırıyoruz.
void Polinom::KokleriHesapla()
{
	d = b * b;
	d = d - (4 * a * c);

	if (d == 0)
	{
		cout << "Denklemin iki tane birbirine esit reel kok vardir.\n";
		x1 = (-1 * b);
		x1 = x1 / (2 * a);
		x2 = x1;
		cout << "\nKokler : " << x1 << " ve " << x2 << endl;
	}

	else if (d > 0)
	{
		cout << "Denklemin iki farkli reel koku vardir.\n";
		x1 = (-1 * b) + sqrt(d);
		x1 = x1 / (2 * a);
		x2 = (-1 * b) - sqrt(d);
		x2 = x2 / (2 * a);
		cout << "\nKokler : " << x1 << " ve " << x2 << endl;

	}

	else
	{
		cout << "Denklemin kokleri sanaldir.\n";
		x1 = (-b) / (2 * a);
		x2 = (sqrt(-d)) / (2 * a);
		cout << "\nKokler : " << x1 << " + i" << x2;
		cout << " ve " << x1 << " - i" << x2 << endl;
	}
}




