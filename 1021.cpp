#include <iostream>
#include <iomanip>
#include <istream>
#include <math.h>


using namespace std;
int main(){

    int  N = 0, div, resto,i;
    double divc, restoc, total = 0.00;
   // float n = 0.00;
    int vet[8];

    cin >> N;

    cout << "NOTAS:" << endl;
    //n2 = 1 * (int)n;
    resto = N % 100;
    div = N / 100;
    vet[1] = div*100;
    cout << div << " nota(s) de R$ 100.00" << endl;
    div = resto / 50;
    resto = resto % 50;
    vet[2] = div*50;
    cout << div << " nota(s) de R$ 50.00" << endl;
    div = resto / 20;
    resto = resto % 20;
    vet[3] = div*20;
    cout << div << " nota(s) de R$ 20.00" << endl;
    div = resto / 10;
    resto = resto % 10;
    vet[4] = div*10;
    cout << div << " nota(s) de R$ 10.00" << endl;
    div = resto / 5;
    resto = resto % 5;
    vet[5] = div*5;
    cout << div << " nota(s) de R$ 5.00" << endl;
    div = resto / 2;
    resto = resto % 2;
    vet[6] = div*2;
    cout << div << " nota(s) de R$ 2.00" << endl;
    div = resto / 1;
    vet[7] = div*1;


    cout << "MOEDAS:" << endl;
    resto = resto % 1;

    cout << div << " moeda(s) de R$ 1.00" << endl;

    i = 1;
    do {
      total = vet[i] + total;
        i++;
    }
    while (i < 8);

   // cout << total << endl;


    divc = N - total;

    //cin >> divc;


    //multiplicar o resto por 100
    //fazer a divisão inteira e dividir por 100

    divc = divc *100;

    restoc = divc;

    div = divc;

    resto = div % 50;
    div = div / 50;
    cout << div << " moeda(s) de R$ 0.50" << endl;




    div = resto / 25;
    cout << div <<  " moeda(s) de R$ 0.25" << endl;
    resto = resto % 25;

    div = resto / 10;
    cout << div <<  " moeda(s) de R$ 0.10" << endl;
    resto = resto % 10;

    div = resto / 5;
    cout << div << " moeda(s) de R$ 0.05" << endl;
    resto = resto % 5;

    div = resto / 1;
    cout << div << " moeda(s) de R$ 0.01" << endl;

return 0;
}

