#include <iostream>

using namespace std;

int silnia ();

int main() {
    int wyjscie;
    do {
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Silnia" << endl;
        cin >> wyjscie;

        if (wyjscie == 1) {
            silnia();
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
