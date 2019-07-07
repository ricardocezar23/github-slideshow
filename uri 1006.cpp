#include <iostream>
#include <istream>
#include <iomanip>

using namespace std;

int main (){

std::cout << std::fixed << std::setprecision(1);
    double A, B, C, MEDIA;

    cin >> A;
    cin >> B;
    cin >> C;
    A *= 2;
    B *= 3;
    C *= 5;

    MEDIA = (A + B + C) / 10;

    cout << "MEDIA = " << MEDIA << "\n";
return 0;
}
