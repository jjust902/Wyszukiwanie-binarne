#include <iostream>
using namespace std;

double f(double x) {
    return x*(x*(x-3)+2)-6;
}

double polowienie(double a, double b, double epsilon) {
    if (f(a) == 0.0){
        return a;
    }
    if (f(b) == 0.0){
        return b;
    }
    
    double srodek = (a+b)/2;

    if (b-a <= epsilon){
        return srodek;
    }
    if (f(a)*f(srodek) < 0){
        return polowienie(a, srodek, epsilon);
    }
    return polowienie(srodek, b, epsilon);
}

int main() {
    double a = -10;
    double b = 10;
    double epsilon = 0.00001;

    double wynik = polowienie(a, b, epsilon);

    cout << "Znalezione miejsce zerowe wynosi: " << wynik << endl;

    return 0;
}