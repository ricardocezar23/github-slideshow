#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int A, B, C, D;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    if (B > C)
    {

        if (D > A)
        {

             if ((C + D) > (A + B))
                {

                 if((C > 0) and (D > 0))
                {

                    if(A % 2 == 0)
                    {
                        cout << "Valores aceitos" << endl;
                    }else {
        cout << "Valores nao aceitos" << endl;
                }
                }
                else {
        cout << "Valores nao aceitos" << endl;
                }
                }
                else {
        cout << "Valores nao aceitos" << endl;
                }
        }
                else {
        cout << "Valores nao aceitos" << endl;
        }
    }
        else {
        cout << "Valores nao aceitos" << endl;
    }



    return 0;
}
