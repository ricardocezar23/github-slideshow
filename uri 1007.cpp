#include <iostream>
#include <istream>
#include <iomanip>

using namespace std;

int main (){

std::cout << std::fixed << std::setprecision(1);
    int A, B, C,D, DIFERENCA;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    DIFERENCA = (A * B) - (C * D);



    cout << "DIFERENCA = " << DIFERENCA << "\n";
return 0;
}
