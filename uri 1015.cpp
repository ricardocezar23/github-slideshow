#include <iostream>
#include <iomanip>
#include <istream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[]){

    float x1, x2, y1, y2;
    double Distancia;

    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    Distancia =  sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));
    //Distancia = sqrt(Distancia);

    std::cout << std::fixed << std::setprecision(4) << Distancia << endl;
return 0;
}
