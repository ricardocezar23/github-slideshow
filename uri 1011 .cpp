#include <iostream>
#include <istream>
#include <iomanip>

using namespace std;


int main(){
std::cout << std::fixed << std::setprecision(3);

    int r;
    double pi = 3.14159, volume;

    cin >> r;


    volume = (4.0/3.0) * pi * (r);
    volume = volume * (r*r);


    cout << "VOLUME = " << volume << endl;

return 0;
}
