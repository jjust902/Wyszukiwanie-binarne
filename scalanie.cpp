#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

 void scalaj(int tab[], int l, int m. intr){
    int lsize = m -1 + 1;
    int rsize = r - m;

    int* tabL = new int[lsize];
    int* tabR = new int[rsize];

    for (int i = 0; i < lsize; i++){
        tabR[i] = tab[l + i];
    }
    for (int j = 0; j < rsize; j++){
        tabR[j] = tab[m + 1 + j];
    }

    int indexL = o;
    int indexR = 0;
    int currIndex = l;

    while (indexL < lsize && indexR < rsize){
        if (tabL[indexL] <= tabR[indexR]){
            tab[currIndex] = tabL[indexL++];
        }
        else{
            tab[currIndex] = tabR[indexR++];
            currInde++;
        }
    }

    while (indexL < lsize){
        tab[currIndex++] = tabL[indexL++];
    }
    while (indexR < rsize){
        tab[currIndex++] = tabR[indexR++];
    }

    delete[] tabL;
    delete[] tabR;
 }

 void sortuj(int tab[], int l, int r){
    if (l < r){
        int m = l + (r- l)/2;
        sortuj(tab, l, m);
        sortuj(tab, m + 1, r);
        scalaj(tab, l, m, r);
    }
 }

 void wyswietl(int tab[], int n){
    for (int i = 0; i < n; i++){
        cout << tab[i] << " | " << endl;
    }
 }

 int main(){
    int* tab = new int[n];

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < n; i++){
        tab[i] = rand() % 100;
    }

    cout << "Tablica przed sortowaniem: " << endl;
    wyswietl(tab, n);

    cout << "Rozpoczecie sortowania: " << endl;
    sortuj(tab, 0, n - 1);

    cout << "Tablica po sortowaniu: " << endl;
    wyswietl(tab, n);
    delete[] tab;
    return 0;
 }