
#include <iostream>
#include <string>
using namespace std;

// KULLANICI TANIMLI VERI TIPLERI (STRUCT)
struct person {
    string name;
    int age;
};

int main() {

    // TEMEL VERI TIPLERI
    int a = 5;                  // Integer veri tipi
    float b = 7.99f;            // Float veri tipi
    char c = 'A';               // Character veri tipi
    bool d = true;              // Boolean veri tipi
    int arr[5] = {1, 2, 3, 4, 5}; // Dizi (Array)
    string str = "Merhaba";     // String veri tipi

    // TEMEL VERI TIPLERINI YAZDIRMA
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "Boolean: " << d << endl;
    cout << "String: " << str << endl;

    cout << "Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // SABITLER
    const float PI = 3.14159f;
    float radius = 2.0f;

    // PI = 3.14; HATA VERIR!
    // Sabitlerin degeri sonradan degistirilemez.

    cout << "Cevre: " << 2 * PI * radius << endl;

    // ARITMETIK OPERATORLER
    int x = 30, y = 40;

    cout << "Toplama: " << (x + y) << endl;
    cout << "Cikarma: " << (x - y) << endl;
    cout << "Carpma: " << (x * y) << endl;
    cout << "Bolme: " << (float)x / y << endl;
    cout << "Mod: " << (x % y) << endl;
    cout << "Islem Onceligi: " << (x + y * x) << endl;

    // ATAMA OPERATORLERI
    int toplam = 10;
    int cikarma = 5;

    toplam += a;  // toplam = toplam + a
    cikarma -= a; // cikarma = cikarma - a

    cout << "Toplam: " << toplam
         << ", Cikarma: " << cikarma << endl;

    // STRUCT KULLANIMI
    person n;

    n.age = 22;
    n.name = "Nida";

    cout << "Name: " << n.name
         << ", Age: " << n.age << endl;

    return 0;
}

