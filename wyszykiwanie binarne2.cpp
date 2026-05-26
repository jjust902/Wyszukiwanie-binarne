#include <iostream>
using namespace std;

int wyszukiwanie (int tab[], int rozmiar, int szukana) {
    int l = 0;
    int p = rozmiar - 1;
    while (l <= p) {
        int sr = (l + p) / 2;
        if (tab[sr] == szukana) {
            return sr;
        }
        else if (tab[sr] < szukana) {
            l = sr + 1;
        }
        else {
            p = sr - 1;
        }
    }
    return - 1;
}

int main() {
    int tab[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int rozmiar = sizeof(tab) / sizeof(tab[0]);
    cout << "Tablica: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }
    cout << "" << endl;
    int szukana;
    cout << "Podaj liczbę którą mam wyszukać: ";
    cin >> szukana;
    int wynik = wyszukiwanie(tab, rozmiar, szukana);
    if (wynik != -1) {
        cout << "znaleziono " << szukana << "na pozycji " << wynik;
    }
    else {
        cout << "Nie udało się znaleźć " << szukana << "w tablicy";
    }
    return 0;
}