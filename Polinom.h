// Ya��zcem CENG�Z
// 170757058
// Bilgisayar M�hendisli�i
// Nesneye Y�nelik Programlama BIM - 104
// II. D�nem (2. yar�y�l)
// Proje2
// Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER

#include <iostream>
#include <cmath>
using namespace std;

// �stenilen class ve �zelliklerini burada yaz�yoruz.

class Polinom
{
	public:
		void KatsayilaraDegerAta(int, int, int);
		int DegerHesapla(int);
		void KokleriHesapla();
	private:
		int a, b, c, d, x;     //private de�i�kenlerimizi burada tan�ml�yoruz. K�kler her zaman tam say� ��kamayaca��ndan float olarak tan�ml�yoruz.
		float x1, x2;		
};



