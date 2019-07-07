#include <iostream>
#include <math.h>

using namespace std;

int main(){

        //ler 3 valores de ponto flutuante
        double A, B, C, R1, R2, Delta;

        cin >> A;
        cin >> B;
        cin >> C;

        Delta = (B*B) - (4 * A * C);
        Delta = sqrt(Delta);
        //se tiver divisão por 0 ou raiz de numero negativo escreva impossivel calcular
      if ((A != 0.0) and (Delta >= 0.0)) {

            A = A * 2;
            R1 = (-B + Delta) / A;
            R2 = (-B - Delta) / A;

            //R1 = R1 / 100;
            //R2 = R2 / 100;
    //saida r1 , r2
    cout << fixed;
    cout.precision(5);
    cout << "R1 = " <<R1 << endl;
    cout << "R2 = " <<R2 << endl;

        }
        //fazer calculo das raizes
        else {
            cout << "Impossivel calcular" << endl;
           }





return 0;
}
