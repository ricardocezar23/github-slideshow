#include <iostream>
#include <istream>
#include <iomanip>

using namespace std;
int main(){

std::cout << std::fixed <<std::setprecision(3);

    double A,B,C, pi = 3.14159;
    double TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

    cin >> A;
    cin >> B;
    cin >> C;

    TRIANGULO = (A * C) /2;
    CIRCULO = (C * C)  * pi;
    TRAPEZIO = ((A + B) / 2) * C ;
    QUADRADO = B * B;
    RETANGULO = A *  B ;


    cout << "TRIANGULO: " << TRIANGULO << endl;
    cout << "CIRCULO: " << CIRCULO << endl;
    cout << "TRAPEZIO: " << TRAPEZIO << endl;
    cout << "QUADRADO: " << QUADRADO << endl;
    cout << "RETANGULO: " << RETANGULO << endl;




return 0;
}
