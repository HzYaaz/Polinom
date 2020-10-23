// Yaðýzcem CENGÝZ
// 170757058
// Bilgisayar Mühendisliði
// Nesneye Yönelik Programlama BIM - 104
// II. Dönem (2. yarýyýl)
// Proje2
// Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER

#include <iostream>
#include <cmath>
using namespace std;

// Ýstenilen class ve özelliklerini burada yazýyoruz.

class Polinom
{
	public:
		void KatsayilaraDegerAta(int, int, int);
		int DegerHesapla(int);
		void KokleriHesapla();
	private:
		int a, b, c, d, x;     //private deðiþkenlerimizi burada tanýmlýyoruz. Kökler her zaman tam sayý çýkamayacaðýndan float olarak tanýmlýyoruz.
		float x1, x2;		
};



