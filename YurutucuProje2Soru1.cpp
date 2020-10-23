// Yağızcem CENGİZ


#include "Polinom.h"
#include <iostream>
#include <cmath>
using namespace std;




int main()
{
    Polinom polinom;
    
    int a, b, c, d , katsayi;

	//A , B , C degiskenlerimizi buradan alıp , KatsayilaraDegerAta fonksyionuna yolluyoruz.
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
   
   	system("pause");    //exe uzantılı dosyayı açtığımızda , programın direkt kapanmaması için gereken fonksiyon.
   	
    return 0;
}




