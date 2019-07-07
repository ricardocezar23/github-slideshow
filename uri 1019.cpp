#include <iostream>

using namespace std;

int main(){

    int N, segundos, minutos, horas, horas_seg = 3600;


    cin >> N;



    horas = N / horas_seg;
    minutos = (N - (horas*horas_seg))/ 60;
    segundos = (N -(minutos*60 ) - horas_seg*horas) ;

    cout << horas << ":" << minutos << ":" << segundos << endl;

return 0;
}
