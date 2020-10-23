// Yaðýzcem CENGÝZ
// 170757058
// Bilgisayar Mühendisliði
// Nesneye Yönelik Programlama BIM - 104
// II. Dönem (2. yarýyýl)
// Proje2
// Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER


#include "Polinom.h"
#include <iostream>
#include <cmath>
using namespace std;




int main()
{
    Polinom polinom;
    
    int a, b, c, d , katsayi;

	//A , B , C degiskenlerimizi buradan alýp , KatsayilaraDegerAta fonksyionuna yolluyoruz.
    cout << "x kare degiskeninin degeri olarak bir katsayi giriniz: ";
    cin >> a;
    cout << "x degiskeninin degeri olarak bir katsayi giriniz: ";
    cin >> b;
    cout << "Sabit sayi degiskeninin degerini giriniz: ";
    cin >> c;

    polinom.KatsayilaraDegerAta(a , b ,c);

    cout << endl;
    cout << "x icin katsayi giriniz : ";
    cin >> katsayi;
    cout << endl << "y = " << polinom.DegerHesapla(katsayi) << endl << endl;

    polinom.KokleriHesapla();

    cout << endl;
   
   	system("pause");    //exe uzantýlý dosyayý açtýðýmýzda , programýn direkt kapanmamasý için gereken fonksiyon.
   	
    return 0;
}




