#include <iostream>
#include <cmath>

using namespace std;

int silnia ();
void czyPierwsza(int);

int main() {
    int wyjscie;
    do {
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Silnia" << endl;
        cout << "2. Czy pierwsza" << endl;
        cin >> wyjscie;

        if (wyjscie == 1) {
            silnia();
        } else if (wyjscie == 2) {
            czyPierwsza(a);
        }
    } while(wyjscie != 0);
    return 0;
}

int silnia () {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba < 0) {
        cout << "Podana liczba jest ujemna";
        return 0;
    }

    int wynik = liczba;

    for (int i = liczba - 1; i > 0; i--) {
        wynik = wynik * i;
    }

    cout << endl << "Wynik = " << wynik << endl;

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
