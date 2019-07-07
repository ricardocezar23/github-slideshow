#include <iostream>
#include <istream>
#include <iomanip>

using namespace std;

int main(){
std::cout << std::fixed << std::setprecision(2);
    int cod, Npecas, i ;
    double ValorUnitario, res = 0 ;

    for(i = 1; i<= 2; i++){
    cin >> cod;
    cin >> Npecas;
    cin >> ValorUnitario;

    ValorUnitario = ValorUnitario * Npecas;
    res = ValorUnitario + res;

   }

    cout << "VALOR A PAGAR: R$ " << res << endl;



return 0;
}
