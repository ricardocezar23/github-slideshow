#include <iostream>
#include <istream>
#include <iomanip>

using namespace std;

int main (){

std::cout << std::fixed << std::setprecision(2);

    string nome;
    double salFixo, totalVendas, TOTAL;

    cin >> nome;
    cin >> salFixo;
    cin >> totalVendas;

    TOTAL = salFixo + (totalVendas /100*15);


    cout << "TOTAL = " << "R$ " << TOTAL << "\n";

return 0;
}

