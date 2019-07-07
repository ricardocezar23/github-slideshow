#include <iostream>
#include <iomanip>
#include <istream>
#include <math.h>


using namespace std;
int main(){

    int n, div, resto;
    //float valor;

    cin >> n;

    cout << n << endl;
    resto = n % 100;
    div = n / 100;
    cout << div << " nota(s) de R$ 100,00" << endl;
    div = resto / 50;
    resto = resto % 50;
    cout << div << " nota(s) de R$ 50,00" << endl;
    div = resto / 20;
    resto = resto % 20;
    cout << div << " nota(s) de R$ 20,00" << endl;
    div = resto / 10;
    resto = resto % 10;
    cout << div << " nota(s) de R$ 10,00" << endl;
    div = resto / 5;
    resto = resto % 5;
    cout << div << " nota(s) de R$ 5,00" << endl;
    div = resto / 2;
    resto = resto % 2;
    cout << div << " nota(s) de R$ 2,00" << endl;
    div = resto / 1;
    resto = resto % 1;
    cout << div << " nota(s) de R$ 1,00" << endl;
return 0;
}
