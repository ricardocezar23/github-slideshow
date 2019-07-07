#include <iostream>
#include <iomanip>
#include <istream>
#include <math.h>


using namespace std;
int main(){

    int h;
    double l, kmh;

    cin >> h;
    cin >> kmh;

    l = (h * kmh) / 12;

    std::cout << std::fixed << std::setprecision(3) << l << endl;

return 0;
}
