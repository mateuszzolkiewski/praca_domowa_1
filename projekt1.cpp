#include <iostream>
#include <cmath>

using namespace std;

void czyPierwsza(int);

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Czy pierwsza" << endl;
        cin >> wyjscie;

        if (wyjscie == 1) {
            czyPierwsza(a);
        }
    } while(wyjscie != 0);
    return 0;
}

void czyPierwsza (int a) {
    int liczba = a;
    if (liczba < 1) {
        cout << "Podano niepoprawna liczbe" << endl;
        return;
    } else if (liczba == 1) {
        cout << "Liczba 1 nie jest liczba pierwsza" << endl;
        return;
    }

    for (int i = 2; i < liczba; i++) {
        if (liczba % i == 0) {
            cout << "Liczba " << liczba << " nie jest liczba pierwsza" << endl;
            return;
        }
    }

    cout << "Liczba " << liczba << " jest liczba pierwsza" << endl;
    return;
}
