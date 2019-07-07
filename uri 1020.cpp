#include <iostream>

using namespace std;
int main(){
    int N, meses, anos, dias;

    cin >> N;

    anos = N / 365;
    meses = (N % 365) / 30;
    dias = (N % 365) % 30;

    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;

return 0;
}
