// Ya��zcem CENG�Z
// 170757058
// Bilgisayar M�hendisli�i
// Nesneye Y�nelik Programlama BIM - 104
// II. D�nem (2. yar�y�l)
// Proje2
// Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER


#include "Polinom.h"
#include <iostream>
#include <cmath>
using namespace std;




int main()
{
    Polinom polinom;
    
    int a, b, c, d , katsayi;

	//A , B , C degiskenlerimizi buradan al�p , KatsayilaraDegerAta fonksyionuna yolluyoruz.
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
   
   	system("pause");    //exe uzant�l� dosyay� a�t���m�zda , program�n direkt kapanmamas� i�in gereken fonksiyon.
   	
    return 0;
}




