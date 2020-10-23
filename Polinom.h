// Yağızcem CENGİZ

#include <iostream>
#include <cmath>
using namespace std;

// İstenilen class ve özelliklerini burada yazıyoruz.

class Polinom
{
	public:
		void KatsayilaraDegerAta(int, int, int);
		int DegerHesapla(int);
		void KokleriHesapla();
	private:
		int a, b, c, d, x;     //private değişkenlerimizi burada tanımlıyoruz. Kökler her zaman tam sayı çıkamayacağından float olarak tanımlıyoruz.
		float x1, x2;		
};



