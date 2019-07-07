#include <iostream>
#include <iomanip>
#include <istream>

using namespace std;
int main(){


    int X;
    float Y,R;
   // double ;

    cin >> X;
    cin >> Y ;


    R = X / Y;


    std::cout << std::fixed << std::setprecision(3) << R << " km/l" << endl;


return 0;
}
