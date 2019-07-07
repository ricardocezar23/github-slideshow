#include <iostream>
#include <istream>
#include <iomanip>

using namespace std;

int main (){

std::cout << std::fixed << std::setprecision(4);
    double area, n = 3.14159;
    double raio;


    cin >> raio;

    area = n * (raio * raio);

    cout <<"A=" << area << "\n";

return 0;
}
