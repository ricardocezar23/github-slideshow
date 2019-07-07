#include <iostream>
#include <istream>
#include <iomanip>
#include <math.h>
#include <cmath>



using namespace std;
int main(){

    int A, B, C, MaiorAB;

    cin >> A;
    cin >> B;
    cin >> C;

    MaiorAB = (A+B+abs(A-B))/2;

    MaiorAB = (MaiorAB+C+abs(MaiorAB-C))/2;

    cout << MaiorAB << " eh o maior" << endl;


return 0;
}
